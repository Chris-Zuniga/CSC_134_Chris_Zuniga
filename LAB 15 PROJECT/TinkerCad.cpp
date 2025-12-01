
/*

Chris Zuniga
November 24, 2025
C++ code

*/

#include <Keypad.h>

int main(){

//LED pin definitions
int ledRed = 2; //this is the red LED pin
int ledGreen = 4; //this is the green LED pin

//keypad setup
const byte ROWS = 4 ; //this is the number of rows
const byte COLS = 4 ; //this is the number of columns

//key board layout
char  keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};



//connect keypad ROW0, ROW1, ROW2 and ROW3 to these arduino pins.
byte rowPins[ROWS] = {13,12,11,10}; //keypad rows
byte colPins[COLS] = {9,8,7,6}; //keypad cols

//create the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


//password and user input storage
char  password[6] = "A65*8";
char  keyPadEntries [6];
int keyPressCount = 0;


//LED delay times
int failDelay = 3000;
int successDelay = 3000;

//executes when the arduino starts up
void setup()
{
  Serial.begin(9600);
  //initialize LED pins as outputs
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

//infinite loop
void loop()
{
  //get the key that was pressed
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key){
  
  //Prints the key that was pressed
   Serial.print("Key Pressed: ");
   Serial.println(key);
    
   //This code checks if the key pressed is the # key
    if(key == '#'){
      //This code adds a null terminator to the end of the keyPadEntries array to make it a valid string
      keyPadEntries[keyPressCount] = '\0';
    }
      
      //This code compares the entered password with the stored password
      if(strcmp(keyPadEntries, password) == 0)
      {
        //correct password
        Serial.println("Access Granted!");
        digitalWrite(ledGreen, HIGH);
        delay(successDelay);
        digitalWrite(ledGreen, LOW);
      } else {
        //incorrect password
        Serial.println("Access Denied!");
        digitalWrite(ledRed, HIGH);
        delay(failDelay);
        digitalWrite(ledRed, LOW);
  }
  
   // reset for next attempt
    keyPressCount = 0;
    memset(keyPadEntries, 0, sizeof(keyPadEntries));
} else {
    // store the key pressed in the keyPadEntries array
    if (keyPressCount < 5) {
        keyPadEntries[keyPressCount] = key;
        keyPressCount++;
    } else {
        Serial.println("Max input length reached, press # to submit.");
    }
}
  }

  return 0;
}

/*

TINKERCAD CODE BELOW

#include <Keypad.h>


//LED pin definitions
int ledRed = 2; //this is the red LED pin
int ledGreen = 3; //this is the green LED pin

//keypad setup
const byte ROWS = 4 ; //this is the number of rows
const byte COLS = 4 ; //this is the number of columns

//key board layout
char  keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};



//connect keypad ROW0, ROW1, ROW2 and ROW3 to these arduino pins.
byte rowPins[ROWS] = {11,10,9,8}; //keypad rows
byte colPins[COLS] = {7,6,5,4}; //keypad cols

//create the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


//password and user input storage
char  password[6] = "A65*8";
char  keyPadEntries [6];
int keyPressCount = 0;


//LED delay times
int failDelay = 3000;
int successDelay = 3000;

//executes when the arduino starts up
void setup()
{
  Serial.begin(9600);
  //initialize LED pins as outputs
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

//infinite loop
void loop()
{
  //get the key that was pressed
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key){
  
  //Prints the key that was pressed
   Serial.print("Key Pressed: ");
   Serial.println(key);
    
   //This code checks if the key pressed is the # key
    if (key == '#') {
    // terminate string
    keyPadEntries[keyPressCount] = '\0';

    // compare entered password with stored password
    if (strcmp(keyPadEntries, password) == 0) {
        Serial.println("Access Granted!");
        digitalWrite(ledGreen, HIGH);
        delay(successDelay);
        digitalWrite(ledGreen, LOW);
    } else {
        Serial.println("Access Denied!");
        digitalWrite(ledRed, HIGH);
        delay(failDelay);
        digitalWrite(ledRed, LOW);
    }

    // reset for next attempt
    keyPressCount = 0;
    memset(keyPadEntries, 0, sizeof(keyPadEntries));
} else {
    // store the key pressed in the keyPadEntries array
    if (keyPressCount < 5) {
        keyPadEntries[keyPressCount] = key;
        keyPressCount++;
    } else {
        Serial.println("Max input length reached, press # to submit.");
    }
}
  }
}
  





*/