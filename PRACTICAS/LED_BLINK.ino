#define BAUDRAT 9600
#define LED 13
#define TEM 100
void setup() {
 pinMode(LED,OUTPUT);
 serial.begin(BAUDRAT);
}

void loop() {
digitalWrite(LED,1);
delay(TEM);
digitalWrite(LED,0);
delay(TEM);

}
