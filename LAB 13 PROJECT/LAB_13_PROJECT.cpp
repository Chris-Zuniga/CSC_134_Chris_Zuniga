//Chris Zuniga
//November 10, 2025

#include <iostream>
#include <iomanip>

using namespace std;

    const int SIZE = 3;
    char board[SIZE][SIZE];
    char Player = 'X';
    


// Displaying the board game

    void Drawingboard(char board [SIZE][SIZE]) {

        // Printing the line grid format
        //Printing the bars '|' and the horizontal lines '---+---+---' 

    
     std::cout << "\n";
        for(int Row = 0; Row < SIZE; Row++)
        {
         std::cout << " ";
            for (int Col = 0; Col < SIZE; Col++)
            {
                std::cout << board[Row][Col];

                    if(Col < SIZE - 1) std::cout <<  " | "; 

            }
                    
                    std::cout << "\n";

                    if(Row < SIZE - 1)  std::cout << "---+---+---\n"; 
             

        }
        std::cout << "\n";

    }

//Checking for wins
bool checkwin()
{
    //Rows and Colums of the Tic Tac Toe board
    for (int Win = 0; Win < SIZE; Win++)
    {
        //This type of code is for to check if rows, colums, if there any three matching symbols 'X' OR 'O'
        if ((board [Win][0] == Player && board [Win][1] == Player && board [Win][2] == Player)  || 
         (board [0][Win] == Player && board [1][Win] == Player && board [2][Win] == Player))
         return true;
    }

    //Thus type of code is for to check if the diagonals have three matching symbols 'X' OR 'O'
    if ((board [0][0] == Player && board [1][1] == Player && board [2][2] == Player)  || 
         (board [0][2] == Player && board [1][1] == Player && board [2][0] == Player))
         return true;

    // If any line has an 'X' or an 'O' and still no wins, it is called a tie
         return false;    

}


    // This part of code is to check if there any spaces left in the board and if all the spaces are filled and no wins, its a draw.

    bool loops(){

        for(int Space = 0; Space < SIZE; Space++){
            for(int NoSpace = 0; NoSpace < SIZE; NoSpace++){
                if(board[Space][NoSpace] == ' '){
                    return false;
                }
            }
        }
        return true;

    }

    //This part of coding is switching players, after 'X' or 'O' has done placing, the current player is switched to the other player

    void switchPlayer(){
        if(Player == 'X')
        Player = 'O';
        else
        Player = 'X';
    }

    int main()
    {
        //Making the board Tic Tac Toe
        for (int Line = 0; Line < SIZE; ++Line)
            for (int Cross = 0; Cross < SIZE; ++Cross)
                 board[Line][Cross] = ' ';

       
        //Drawing the Empty board game of tic tac toe    
        
        Drawingboard(board);
        
        //Game loop

        while(true){
            int Row, Col;

            //Asking the current player for the input

            std::cout << "Player " << Player << ", Enter row and column (0-2)";
            std::cin >> Row >> Col;

            // Making sure that the move was Valid or Invalid
            if(Row < 0 || Row >= SIZE || Col < 0 || Col >= SIZE || board[Row][Col] != ' ' )
            {
                std::cout << "Invaild move. Try again!\n";
                continue;

            }

            //Place the Player 'X' or 'O'

            board[Row][Col] = Player;

            //Drawing the board again
            Drawingboard(board);

            //Checking if the player Win
            if (checkwin())
            {
                std::cout << "Player " << Player << " Wins! \n";
                break;
            }

            //Checking if its a Draw
            if(loops())
            {
                std::cout << "It's a Draw. \n";
                break;
            }

                //Switching players
                switchPlayer();

        }
    

return 0;

    }