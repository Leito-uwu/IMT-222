//Varibales Macros
#define LED		13
#define POT		A0

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  //int brillo = analogRead(POT)/4;         Puede ser una opcion
  int A = analogRead(POT);
  //para la funcion map se definen 5 argumentos el primero que es el valor del pot
  //los otros dos son el minimo y maximo del valor, despues la conversion a la que se quiere realizar en este caso es de 0-255
  int brillo = map(A, 0, 2023, 0 , 255);
  analogWrite(LED,brillo);
}