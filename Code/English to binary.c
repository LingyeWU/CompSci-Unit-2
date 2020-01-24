//If sent binary function is chosen do following:
    }
    else if(key == "SENT BINARY")
    {
      EtoB();
      turnOnOff();
      sentbin();
      turnOnOff();
      text="";
}
    
    else{
      text += key;
    }
    index = 0; //restart the index
  }
}

void EtoB(){

for(int i=0; i<text.length(); i++){

   char myChar = text.charAt(i);
 //Function to translate english to binary
    for(int i=7; i>=0; i--){
      bna = bitRead(myChar,i);
      chch += bna; 
    }
}
}

  
void sentbin(){
    for(int x=0; x < chch.length(); x++){
      char myChar1 = chch.charAt(x);
      if(myChar1 == '0'){
        digitalWrite(led1, LOW);
        blink();
        delay(500);
      } else if(myChar1 == '1'){
        digitalWrite(led1, HIGH);
        blink();
        delay(500);
      } else {
        turnOff();
      }
    }
  }
//Function resposible for blinking
void blink(){
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
}

//function resposible for turning lights on and off
void turnOnOff(){
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 delay(500);
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 delay(500);
}

void turnOff(){
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 delay(500);
}
