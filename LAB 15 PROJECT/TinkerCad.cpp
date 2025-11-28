
/*

Chris Zuniga
November 24, 2025
C++ code

*/








#include <Keypad.h>

int main(){


int ledRed = 2; //this is the red LED pin
int ledGreen = 4; //this is the green LED pin

const byte ROWS = 4 ; //this is the number of rows
const byte COLS = 4 ; //this is the number of columns

//key board layout
char  keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};



byte rowPins[ROWS] = {13,12,11,10}; //keypad rows
byte colPins[COLS] = {9,8,7,6}; //keypad cols





Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



char  password[6] = "A65*8";
char  keyPadEntries [6];
int keyPressCount = 0;



int failDelay = 3000;
int successDelay = 3000;

//executes when the arduino starts up
void setup()
{
  Serial.begin(9600);
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

//infinite loop
void loop()
{
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key){
   Serial.print("Key Pressed: ");
   Serial.println(key);
    
    if(key == '#'){
      keyPadEntries[keyPressCount] = '\0';
      
      //This code is if the keyPadEntries matches the password, it will lit the ledGreen else it will be lit ledRed
      if(strcmp(keyPadEntries, password) == 0)
      {
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
  

      //reseting for next attempt
    for(int attempt = 0; attempt < 6; attempt++)
    {
      keyPadEntries[attempt] = '\0';
    } else {
      //This code represents storing the key presses into the keyPadEntries array until # is pressed
      if(keyPressCount < 5)
      {
        keyPadEntries[keyPressCount] = key;
        keyPressCount++;
      } else {
       Serial.println("Max input length reached, press # to submit.");
      }
      }
    }
  }
}




  return 0;
}