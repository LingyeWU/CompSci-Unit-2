// include the library code:
#include <LiquidCrystal.h>
int index = 0; 
// add all the letters and digits to the keyboard
String keyboard[]={ "SENT"," ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "DEL"};
String text = "";
String mess = "";
int numOptions = 39;
int i;
int led=8;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  attachInterrupt(0, changeLetter, RISING);//button A in port 2
  attachInterrupt(1, selected, RISING);//button B in port 3
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(keyboard[index]);
  lcd.setCursor(0, 1);
  lcd.print(text);
  delay(100);
}

//This function changes the letter in the keyboard
void changeLetter(){
  static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  if (interrupt_time - last_interrupt_time > 200)
  {
  
    last_interrupt_time = interrupt_time;// If interrupts come faster than 200ms, assum
    index++;
      //check for the max row number
    if(index==numOptions){
      index=0; //loop back to first row
    } 
 }
}

//this function adds the letter to the text or send the msg
void selected(){
  static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  if (interrupt_time - last_interrupt_time > 200)
  {
  
    last_interrupt_time = interrupt_time;// If interrupts come faster than 200ms, assum
    
    String key = keyboard[index];
    if (key == "DEL")
    {
      int len = text.length();
      text.remove(len-1);
    }
    else if(key == "SENT")
    {
      for(i=0; i<text.length(); i++) {
        switch(text[i]) {
          case ' ':
          mess+="0";
          break;
          case 'A': 
           mess=mess+"12";
          break;
          case 'B':
            mess=mess+"2111";
          break;
          case 'C':
            mess=mess+"2121";
          break;
          case 'D':
          mess+="211";
          break;
          case 'E':
          mess+="1";
          break;
          case 'F':
          mess+="1121";
          break;
          case 'G':
          mess+="221";
          break;
          case 'H':
          mess+="1111";
          break;
          case 'I':
          mess+="11";
          break;
          case 'J':
          mess+="1222";
          break;
          case 'K':
          mess+="212";
          break;
          case 'L':
          mess+="1211";
          break;
          
          case 'M':
          mess+="22";
          break;
          
          case 'N':
          mess+="21";
          break;
          
          case 'O':
          mess+="222";
          break;
          
          case 'P':
          mess+="1221";
          break;
          
          case 'Q':
          mess+="2212";
          break;

          case 'R':
          mess+="121";
          break;

          case 'S':
          mess+="111";
          break;

          case 'T':
          mess+="2";
          break;

          case 'U':
          mess+="112";
          break;

          case 'V':
          mess+="1112";
          break;

          case 'W':
          mess+="122";
          break;

          case 'X':
          mess+="2112";
          break;

          case 'Y':
          mess+="2122";
          break;

          case 'Z':
          mess+="2211";
          break;

          case '1':
          mess+="12222";
          break;

          case '2':
          mess+="11222";
          break;

          case '3':
          mess+="11122";
          break;

          case '4':
          mess+="11112";
          break;

          case '5':
          mess+="11111";
          break;

          case '6':
          mess+="21111";
          break;

          case '7':
          mess+="22111";
          break;

          case '8':
          mess+="22211";
          break;

          case '9':
          mess+="22221";
          break;

          case '0':
          mess+="22222";
          break;
        }
        mess+="3";
      }
      Serial.print(mess);
       for(i=0; i<7; i++) {
        blinkLight(300, 300);
      }
      for(i=0; i<mess.length(); i++) {
        switch (mess[i]) {
          case '0':
          delay(3000);
          break;
          
          case '1':
          blinkLight(1000, 1000);
          break;
          
          case '2':
          blinkLight(3000, 1000);
          break;
          
          case '3':
          delay(1000);
          break;
        }
      }
      
      for(i=0; i<7; i++) {
        blinkLight(300, 300);
      }
      		
          
      text="";
    }else{
      text += key;
    }
    index = 0; //restart the index
  }

  
  //
}
    
    void blinkLight(int on, int off) {
      digitalWrite(led, HIGH);
      delay(on);
      digitalWrite(led, LOW);
      delay(off);
      
    }
