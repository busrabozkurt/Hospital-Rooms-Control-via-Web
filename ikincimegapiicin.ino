//Uno son 3 oda pi icin
String sonbes;
String inputString = "";
bool stringComplete = false;
String inputString1 = "";
bool stringComplete1 = false;
String inputString2 = "";
bool stringComplete2 = false;
String inputString3 = "";
bool stringComplete3 = false;
char bir ='1';
char sifir ='0';
int i=60;

void setup() {
  // initialize both serial ports:
  Serial.begin(9600);
  inputString.reserve(80);
  pinMode(2, OUTPUT);//1
  pinMode(3, OUTPUT);//2
  pinMode(4, OUTPUT);//3
  pinMode(5, OUTPUT);//4
  pinMode(6, OUTPUT);//5
  pinMode(7, OUTPUT);//6
  pinMode(8, OUTPUT);//7
  pinMode(9, OUTPUT);//8
  pinMode(10, OUTPUT);//9
  pinMode(11, OUTPUT);//10
  pinMode(12, OUTPUT);//11
  pinMode(13, OUTPUT);//12
  pinMode(A0, OUTPUT);//13
  pinMode(A1, OUTPUT);//14
  pinMode(A2, OUTPUT);//15
}

void loop() {

  if (stringComplete) {

    //Serial1.readBytes(al,9);
    //digitalWrite(LED_BUILTIN, LOW);
    //Serial.write.println(gonder2);
    //Serial.println(sonbes);
    //Serial.println(sonbes);
     sonbes = inputString;
    if (sonbes[i] == bir){      
      digitalWrite(2, LOW);
      delay(100);
    }
    else if(sonbes[i]==sifir){
      digitalWrite(2, HIGH);
      delay(100);
    }
    if (sonbes[i+1]==bir){
      digitalWrite(3, LOW);
      delay(100);
    }
    else if(sonbes[i+1]==sifir){
      digitalWrite(3, HIGH);
      delay(100);
    }
    if (sonbes[i+2]==bir){
      digitalWrite(4, LOW);
      delay(100);
    }
    else if (sonbes[i+2]==sifir){
      digitalWrite(4, HIGH);
      delay(100);
    } 
    if (sonbes[i+3]==bir){
      digitalWrite(5, LOW);
      delay(100);
    }
    else if (sonbes[i+3]==sifir){
      digitalWrite(5, HIGH);
      delay(100);
    } 
    if (sonbes[i+4]==bir){
      digitalWrite(6, LOW);
      delay(100);
    }
    else if (sonbes[i+4]==sifir){
      digitalWrite(6, HIGH);
      delay(100);
    } 
    if (sonbes[i+5]==bir){
      digitalWrite(7, LOW);
      delay(100);
    }
    else if (sonbes[i+5]==sifir){
      digitalWrite(7, HIGH);
      delay(100);
    } 
    if (sonbes[i+6]==bir){
      digitalWrite(8, LOW);
      delay(100);
    }
    else if (sonbes[i+6]==sifir){
      digitalWrite(8, HIGH);
      delay(100);
    } 
    if (sonbes[i+7]==bir){
      digitalWrite(9, LOW);
      delay(100);
    }
    else if (sonbes[i+7]==sifir){
      digitalWrite(9, HIGH);
      delay(100);
    } 
    if (sonbes[i+8]==bir){
      digitalWrite(10, LOW);
      delay(100);
    }
    else if (sonbes[i+8]==sifir){
      digitalWrite(10, HIGH);
      delay(100);
    } 
    if (sonbes[i+9]==bir){
      digitalWrite(11, LOW);
      delay(100);
    }
    else if (sonbes[i+9]==sifir){
      digitalWrite(11, HIGH);
      delay(100);
    } 
    if (sonbes[i+10]==bir){
      digitalWrite(12, LOW);
      delay(100);
    }
    else if (sonbes[i+10]==sifir){
      digitalWrite(12, HIGH);
      delay(100);
    } 
    if (sonbes[i+11]==bir){
      digitalWrite(13, LOW);
      delay(100);
    }
    else if (sonbes[i+11]==sifir){
      digitalWrite(13, HIGH);
      delay(100);
    } 
    if (sonbes[i+12]==bir){
      digitalWrite(A0, LOW);
      delay(100);
    }
    else if (sonbes[i+12]==sifir){
      digitalWrite(A0, HIGH);
      delay(100);
    } 
    if (sonbes[i+13]==bir){
      digitalWrite(A1, LOW);
      delay(100);
    }
    else if (sonbes[i+13]==sifir){
      digitalWrite(A1, HIGH);
      delay(100);
    } 
    if (sonbes[i+14]==bir){
      digitalWrite(A2, LOW);
      delay(100);
    }
    else if (sonbes[i+14]==sifir){
      digitalWrite(A2, HIGH);
      delay(100);
    }
     // clear the string:
    inputString = "";
    sonbes = "";
    stringComplete = false;
 }
}
void serialEvent() {
  while (Serial.available()>0) {
    // get the new byte:
    //char inChar = (char)Serial.read();
    // add it to the inputString:
    //inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    //if (inChar == '<') {
    inputString  = Serial.readString();
    stringComplete = true;
    //}
  }
}
