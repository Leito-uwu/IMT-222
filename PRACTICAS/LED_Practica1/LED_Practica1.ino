#define BAUDRAT 9600
void setup() {
  Serial.begin(BAUDRAT);
  pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13,1);
delay(100);
digitalWrite(13,0);
delay(100);
}
