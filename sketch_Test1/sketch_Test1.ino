int LED=13;
int helligkeit= 0; 
int fadeschritte= 5;

void setup()
{
  pinMode(LED, OUTPUT);
}
void loop()
{
  analogWrite(LED, helligkeit);
  helligkeit = helligkeit + fadeschritte;
  delay(50);
  if (helligkeit == 0 || helligkeit == 255)
  {
    fadeschritte = -fadeschritte ;
  }
}
