#include    <EEPROM.h>
#define     B1         2
#define     B2         3
#define     BAUDRATE   9600
#define     TIME       5000
unsigned int volum;
volatile unsigned long lasttime=0;
volatile unsigned int debounceDelay = 80;
boolean flag1       = false;
boolean flag2       = false;

void setup() {
pinMode(B1,INPUT);
pinMode(B2,INPUT);
attachInterrupt(digitalPinToInterrupt(B1),Subir, FALLING);
attachInterrupt(digitalPinToInterrupt(B2),Bajada, FALLING);
Serial.begin(BAUDRATE);
Serial.print("Volumen es: ");
Serial.println(EEPROM.read(0));
}

void loop() {
  
  if(flag1==flag2){
    volum=0;
    
  }
  
  
  delay(TIME);
}
void Subir() {
  if (millis()-lasttime > debounceDelay){
    if (volum < 20){
        volum++;
        lasttime = millis();
        EEPROM.write(0,volum);
    }
    }
  Serial.print("Volumen es: ");
  Serial.println(EEPROM.read(0));
}
void Bajada() {
  if (millis()-lasttime > debounceDelay){
    if (volum > 0){
        volum--;
        lasttime = millis();
        EEPROM.write(0,volum);
    }
  Serial.print("Volumen es: ");
  Serial.println(EEPROM.read(0));
}
}