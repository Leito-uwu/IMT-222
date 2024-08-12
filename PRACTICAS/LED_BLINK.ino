#define BAUDRAT 9600
void setup() {
 pinMode(13,OUTPUT);
 serial.begin(BAUDRAT);


}

void loop() {
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(100);

}
