#define LED 13
#define BOTTON 2
#define TIME 1000

void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(BOTTON, INPUT);
}

void loop() {
  byte dato = digitalRead(2);
  if(dato==1){
  digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
