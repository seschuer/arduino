int sensor=0;

void setup() {

  pinMode (0,INPUT); //gassensor
  pinMode (8,OUTPUT); //LED
  pinMode (7,OUTPUT);

  Serial.begin(9600);

}

void loop() {
  
   //sensor=analogRead(A0);
   sensor=analogRead(0);
   Serial.println(sensor);
    
   //delay(1000);

   if (sensor>=59) {
  
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    delay(200);
    digitalWrite(7,LOW);
    delay(200);
   }

   else if (sensor>=57 && sensor<59) {

    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(200);
    
   }

  else {

    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(200);
   
  }
   

}
