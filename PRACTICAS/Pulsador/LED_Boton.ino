#define LED 13
#define BOTTON 1
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOTTON,INPUT);
}

void loop()
{
  if(digitalRead(BOTTON)==1)
  {
  digitalWrite(LED,true);
  }else
  {
  digitalWrite(LED,false);
  }
}
