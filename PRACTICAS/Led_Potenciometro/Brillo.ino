//Varibales Macros
#define LED		13
#define POT		A0

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  int brillo = analogRead(POT)/4;
  analogWrite(LED,brillo);
}