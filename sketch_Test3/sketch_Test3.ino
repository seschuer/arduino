int lightornot=0;

void setup() {

  pinMode (8,OUTPUT);
  pinMode (7, OUTPUT);

}

void loop() {

  if (lightornot==0) { // warum nicht == ? ;boolean
  
    digitalWrite(8,HIGH);
    delay (500);
    digitalWrite(8,LOW);
    lightornot = 1;

  }

  else {
    
    digitalWrite(7,HIGH);
    delay (500);
    digitalWrite(7,LOW);
    lightornot = 0;
  
  }

}
