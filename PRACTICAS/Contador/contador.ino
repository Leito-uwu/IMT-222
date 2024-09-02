#define		PULS		2
#define		PASO		1
#define		BAURENDT	9600
#define		RESET		3
#define 	VALOR		0
unsigned int cont;
void setup()
{
  Serial.begin(BAURENDT);
  pinMode(PULS, INPUT_PULLUP);
  pinMode(RESET, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PULS), interrupir, FALLING);
  attachInterrupt(digitalPinToInterrupt(RESET), reinicio, FALLING);
}

void loop()
{
 
}

void interrupir()
{
	cont+=PASO;
  	Serial.println(cont);

}
void reinicio()
{
	cont=VALOR;
  	Serial.println(cont);
}