

#include "matriz.h"

MyClass thisClass = MyClass();
String texto = "tuvoz";
byte** matriz;
byte enviar[8];

void setup()
{
	Serial.begin(9600);
	
	int tam = texto.length();
	tam = tam * 6 + 8;
	
	Serial.println(tam);
	Serial.println();

	matriz = thisClass.nuevaMatriz(8, tam);    //inicializar matriz
	thisClass.matrizSetText(matriz,texto);	   //set texto en matriz
	thisClass.imprimirMatriz(matriz, 8, tam);  //graficar la matriz

}

void loop()
{

}