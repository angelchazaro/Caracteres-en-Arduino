#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int led = 13;
String cadena;
String cifrado;
int codigo;
char c;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("Escribe codigo: ");
}

void loop() {

  while (Serial.available()) {
    delay(3);
    c = Serial.read();
    cadena += c;
  }

  if (cadena.length() > 0) {
    Serial.println("\n");
    Serial.println("Usted escribio: "+cadena);
    cadena.toUpperCase();
    cadena.replace(" ", "");
    Serial.println("\n");
    Serial.print("La frase modificada: "+cadena);

    if (cadena == "ENCENDERLEDVERDE")
    {
      digitalWrite(led, HIGH);
    }
    if (cadena == "APAGARLEDVERDE")
    {
      digitalWrite(led, LOW);
    }
      char enter=13;
      char borra=12;
      if (c == enter) {
        Serial.print(borra);
        delay(20);
      }

    cadena = "";
  }
}
