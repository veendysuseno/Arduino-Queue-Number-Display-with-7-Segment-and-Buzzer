#define nada 12
#define tombol 13
byte antrian,i;
byte seven_seg_digits[10][7] = { { 0,0,0,0,0,0,1 },  // = 0
                                 { 1,0,0,1,1,1,1 },  // = 1
                                 { 0,0,1,0,0,1,0 },  // = 2
                                 { 0,0,0,0,1,1,0 },  // = 3
                                 { 1,0,0,1,1,0,0 },  // = 4
                                 { 0,1,0,0,1,0,0 },  // = 5
                                 { 0,1,0,0,0,0,0 },  // = 6
                                 { 0,0,0,1,1,1,1 },  // = 7
                                 { 0,0,0,0,0,0,0 },  // = 8
                                 { 0,0,0,0,1,0,0 }   // = 9
                                  };

void setup() {               
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
  digitalWrite(9,HIGH);
  digitalWrite(13,HIGH);  
}

void sevenSegWrite(byte segment) {
  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) {
    digitalWrite(pin, seven_seg_digits[segment][segCount]);
    ++pin;
  }
}

void loop() {
  if(digitalRead(tombol)==LOW){
    antrian++;
    digitalWrite(nada,HIGH);
    delay(500);
    digitalWrite(nada,LOW);
    delay(100);
    digitalWrite(nada,HIGH);
    delay(500);
    digitalWrite(nada,LOW);
    }    
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      sevenSegWrite(antrian/10);
      delay(5);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      sevenSegWrite(antrian%10);
      delay(5);   
}

