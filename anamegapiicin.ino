//Uno ilk 12 oda pi icin
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
int i=0;

void setup() {
  // initialize both serial ports:
  Serial.begin(9600);
  inputString.reserve(80);
  pinMode(2, OUTPUT);//1. odanın 1.ledi
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
  pinMode(22, OUTPUT);//13
  pinMode(23, OUTPUT);//14
  pinMode(24, OUTPUT);//15
  pinMode(25, OUTPUT);//16
  pinMode(26, OUTPUT);//17
  pinMode(27, OUTPUT);//18
  pinMode(28, OUTPUT);//19
  pinMode(29, OUTPUT);//20
  pinMode(30, OUTPUT);//21
  pinMode(31, OUTPUT);//22
  pinMode(32, OUTPUT);//23
  pinMode(33, OUTPUT);//24
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(53, OUTPUT);//44
  pinMode(A0, OUTPUT);//45
  pinMode(A1, OUTPUT);//46
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);
  pinMode(A9, OUTPUT);
  pinMode(A10, OUTPUT);
  pinMode(A11, OUTPUT);
  pinMode(A12, OUTPUT);
  pinMode(A13, OUTPUT);
  pinMode(A14, OUTPUT);//59
  pinMode(A15, OUTPUT);//60 12. odanın son ledi
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
      digitalWrite(22, LOW);
      delay(100);
    }
    else if (sonbes[i+12]==sifir){
      digitalWrite(22, HIGH);
      delay(100);
    } 
    if (sonbes[i+13]==bir){
      digitalWrite(23, LOW);
      delay(100);
    }
    else if (sonbes[i+13]==sifir){
      digitalWrite(23, HIGH);
      delay(100);
    } 
    if (sonbes[i+14]==bir){
      digitalWrite(24, LOW);
      delay(100);
    }
    else if (sonbes[i+14]==sifir){
      digitalWrite(24, HIGH);
      delay(100);
    }
    if (sonbes[i+15]==bir){
      digitalWrite(25, LOW);
      delay(100);
    }
    else if (sonbes[i+15]==sifir){
      digitalWrite(25, HIGH);
      delay(100);
    }
    if (sonbes[i+16]==bir){
      digitalWrite(26, LOW);
      delay(100);
    }
    else if (sonbes[i+16]==sifir){
      digitalWrite(26, HIGH);
      delay(100);
    }
    if (sonbes[i+17]==bir){
      digitalWrite(27, LOW);
      delay(100);
    }
    else if (sonbes[i+17]==sifir){
      digitalWrite(27, HIGH);
      delay(100);
    }
    if (sonbes[i+18]==bir){
      digitalWrite(28, LOW);
      delay(100);
    }
    else if (sonbes[i+18]==sifir){
      digitalWrite(28, HIGH);
      delay(100);
    }
    if (sonbes[i+19]==bir){
      digitalWrite(29, LOW);
      delay(100);
    }
    else if (sonbes[i+19]==sifir){
      digitalWrite(29, HIGH);
      delay(100);
    }
    if (sonbes[i+20]==bir){
      digitalWrite(30, LOW);
      delay(100);
    }
    else if (sonbes[i+20]==sifir){
      digitalWrite(30, HIGH);
      delay(100);
    }
    if (sonbes[i+21]==bir){
      digitalWrite(31, LOW);
      delay(100);
    }
    else if (sonbes[i+21]==sifir){
      digitalWrite(31, HIGH);
      delay(100);
    }
    if (sonbes[i+22]==bir){
      digitalWrite(32, LOW);
      delay(100);
    }
    else if (sonbes[i+22]==sifir){
      digitalWrite(32, HIGH);
      delay(100);
    }
    if (sonbes[i+23]==bir){
      digitalWrite(33, LOW);
      delay(100);
    }
    else if (sonbes[i+23]==sifir){
      digitalWrite(33, HIGH);
      delay(100);
    }
    if (sonbes[i+24]==bir){
      digitalWrite(34, LOW);
      delay(100);
    }
    else if (sonbes[i+24]==sifir){
      digitalWrite(34, HIGH);
      delay(100);
    }
    if (sonbes[i+25]==bir){
      digitalWrite(35, LOW);
      delay(100);
    }
    else if (sonbes[i+25]==sifir){
      digitalWrite(35, HIGH);
      delay(100);
    }
    if (sonbes[i+26]==bir){
      digitalWrite(36, LOW);
      delay(100);
    }
    else if (sonbes[i+26]==sifir){
      digitalWrite(36, HIGH);
      delay(100);
    }
    if (sonbes[i+27]==bir){
      digitalWrite(37, LOW);
      delay(100);
    }
    else if (sonbes[i+27]==sifir){
      digitalWrite(37, HIGH);
      delay(100);
    }
    if (sonbes[i+28]==bir){
      digitalWrite(38, LOW);
      delay(100);
    }
    else if (sonbes[i+28]==sifir){
      digitalWrite(38, HIGH);
      delay(100);
    }
    if (sonbes[i+29]==bir){
      digitalWrite(39, LOW);
      delay(100);
    }
    else if (sonbes[i+29]==sifir){
      digitalWrite(39, HIGH);
      delay(100);
    }
    if (sonbes[i+30]==bir){
      digitalWrite(40, LOW);
      delay(100);
    }
    else if (sonbes[i+30]==sifir){
      digitalWrite(40, HIGH);
      delay(100);
    }
    if (sonbes[i+31]==bir){
      digitalWrite(41, LOW);
      delay(100);
    }
    else if (sonbes[i+31]==sifir){
      digitalWrite(41, HIGH);
      delay(100);
    }
    if (sonbes[i+32]==bir){
      digitalWrite(42, LOW);
      delay(100);
    }
    else if (sonbes[i+32]==sifir){
      digitalWrite(42, HIGH);
      delay(100);
    }
    if (sonbes[i+33]==bir){
      digitalWrite(43, LOW);
      delay(100);
    }
    else if (sonbes[i+33]==sifir){
      digitalWrite(43, HIGH);
      delay(100);
    }
    if (sonbes[i+34]==bir){
      digitalWrite(44, LOW);
      delay(100);
    }
    else if (sonbes[i+34]==sifir){
      digitalWrite(44, HIGH);
      delay(100);
    }
    if (sonbes[i+35]==bir){
      digitalWrite(45, LOW);
      delay(100);
    }
    else if (sonbes[i+35]==sifir){
      digitalWrite(45, HIGH);
      delay(100);
    }
    if (sonbes[i+36]==bir){
      digitalWrite(46, LOW);
      delay(100);
    }
    else if (sonbes[i+36]==sifir){
      digitalWrite(46, HIGH);
      delay(100);
    }
    if (sonbes[i+37]==bir){
      digitalWrite(47, LOW);
      delay(100);
    }
    else if (sonbes[i+37]==sifir){
      digitalWrite(47, HIGH);
      delay(100);
    }
    if (sonbes[i+38]==bir){
      digitalWrite(48, LOW);
      delay(100);
    }
    else if (sonbes[i+38]==sifir){
      digitalWrite(48, HIGH);
      delay(100);
    }
    if (sonbes[i+39]==bir){
      digitalWrite(49, LOW);
      delay(100);
    }
    else if (sonbes[i+39]==sifir){
      digitalWrite(49, HIGH);
      delay(100);
    }
    if (sonbes[i+40]==bir){
      digitalWrite(50, LOW);
      delay(100);
    }
    else if (sonbes[i+40]==sifir){
      digitalWrite(50, HIGH);
      delay(100);
    }
    if (sonbes[i+41]==bir){
      digitalWrite(51, LOW);
      delay(100);
    }
    else if (sonbes[i+41]==sifir){
      digitalWrite(51, HIGH);
      delay(100);
    }
    if (sonbes[i+42]==bir){
      digitalWrite(52, LOW);
      delay(100);
    }
    else if (sonbes[i+42]==sifir){
      digitalWrite(52, HIGH);
      delay(100);
    }
    if (sonbes[i+43]==bir){
      digitalWrite(53, LOW);
      delay(100);
    }
    else if (sonbes[i+43]==sifir){
      digitalWrite(53, HIGH);
      delay(100);
    }
    if (sonbes[i+44]==bir){
      digitalWrite(A0, LOW);
      delay(100);
    }
    else if (sonbes[i+44]==sifir){
      digitalWrite(A0, HIGH);
      delay(100);
    }
    if (sonbes[i+45]==bir){
      digitalWrite(A1, LOW);
      delay(100);
    }
    else if (sonbes[i+45]==sifir){
      digitalWrite(A1, HIGH);
      delay(100);
    }
    if (sonbes[i+46]==bir){
      digitalWrite(A2, LOW);
      delay(100);
    }
    else if (sonbes[i+46]==sifir){
      digitalWrite(A2, HIGH);
      delay(100);
    }
    if (sonbes[i+47]==bir){
      digitalWrite(A3, LOW);
      delay(100);
    }
    else if (sonbes[i+47]==sifir){
      digitalWrite(A3, HIGH);
      delay(100);
    }
    if (sonbes[i+48]==bir){
      digitalWrite(A4, LOW);
      delay(100);
    }
    else if (sonbes[i+48]==sifir){
      digitalWrite(A4, HIGH);
      delay(100);
    }
    if (sonbes[i+49]==bir){
      digitalWrite(A5, LOW);
      delay(100);
    }
    else if (sonbes[i+49]==sifir){
      digitalWrite(A5, HIGH);
      delay(100);
    }
    if (sonbes[i+50]==bir){
      digitalWrite(A6, LOW);
      delay(100);
    }
    else if (sonbes[i+50]==sifir){
      digitalWrite(A6, HIGH);
      delay(100);
    }
    if (sonbes[i+51]==bir){
      digitalWrite(A7, LOW);
      delay(100);
    }
    else if (sonbes[i+51]==sifir){
      digitalWrite(A7, HIGH);
      delay(100);
    }
    if (sonbes[i+52]==bir){
      digitalWrite(A8, LOW);
      delay(100);
    }
    else if (sonbes[i+52]==sifir){
      digitalWrite(A8, HIGH);
      delay(100);
    }
    if (sonbes[i+53]==bir){
      digitalWrite(A9, LOW);
      delay(100);
    }
    else if (sonbes[i+53]==sifir){
      digitalWrite(A9, HIGH);
      delay(100);
    }
    if (sonbes[i+54]==bir){
      digitalWrite(A10, LOW);
      delay(100);
    }
    else if (sonbes[i+54]==sifir){
      digitalWrite(A10, HIGH);
      delay(100);
    }
    if (sonbes[i+55]==bir){
      digitalWrite(A11, LOW);
      delay(100);
    }
    else if (sonbes[i+55]==sifir){
      digitalWrite(A11, HIGH);
      delay(100);
    }
    if (sonbes[i+56]==bir){
      digitalWrite(A12, LOW);
      delay(100);
    }
    else if (sonbes[i+56]==sifir){
      digitalWrite(A12, HIGH);
      delay(100);
    }
    if (sonbes[i+57]==bir){
      digitalWrite(A13, LOW);
      delay(100);
    }
    else if (sonbes[i+57]==sifir){
      digitalWrite(A13, HIGH);
      delay(100);
    }
    if (sonbes[i+58]==bir){
      digitalWrite(A14, LOW);
      delay(100);
    }
    else if (sonbes[i+58]==sifir){
      digitalWrite(A14, HIGH);
      delay(100);
    }
    if (sonbes[i+59]==bir){
      digitalWrite(A15, LOW);
      delay(100);
    }
    else if (sonbes[i+59]==sifir){
      digitalWrite(A15, HIGH);
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
