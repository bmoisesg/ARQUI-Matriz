

#include "matriz.h"

MyClass thisClass = MyClass();
String texto = "!'#$%&/()=?¡";
byte** matriz;


byte rclock = 2; // to all registers
byte latch = 3; // to all registers
byte data = 4; // to first register
int tam = 0;
void setup()
{
	Serial.begin(9600);
	pinMode(latch, OUTPUT);
	pinMode(rclock, OUTPUT);
	pinMode(data, OUTPUT);
	
	tam = texto.length();
	tam = tam * 6 + 8+8;
	
	Serial.println(tam);
	Serial.println();

	matriz = thisClass.nuevaMatriz(8, tam);    //inicializar matriz
	thisClass.matrizSetText(matriz,texto);	   //set texto en matriz
	
	
}

void loop()
{
	thisClass.apuntar = 0;					   //el cursor tiene que estar al inicio de la matriz para mandarla a toDecimal
	thisClass.toDecimal(matriz, tam, rclock, latch, data);		   //usa un array de int's que enviaran los datos a al cubo
	thisClass.imprimirMatriz(matriz, 8, tam);  //graficar la matriz

}