// 
// 
// 

#include "matriz.h"
MyClass::MyClass()
{
}


byte** MyClass::nuevaMatriz(byte filas, byte columnas) {

	byte** ma;
	ma = new byte * [filas];

	for (int i = 0; i < filas; i++) {
		ma[i] = new byte[columnas];
	}
	llenarMatriz(ma,filas,columnas);

	return ma;
}

void MyClass::llenarMatriz(byte** mat, byte f, byte c) {
	for (byte i = 0; i < f; i++)
	{
		for (byte j = 0; j < c; j++)
		{
			//mat[i][j] = i*c + j;
			mat[i][j] = 0;
		}
	}

};

void MyClass::imprimirMatriz(byte** mat, byte fila, byte col) {
	for (byte i = 0; i < fila; i++) {
		for (byte j = 0; j < col; ++j) {
			//Serial.print("[");
			Serial.print(mat[i][j]);
			Serial.print(',');
			//Serial.print("]");
		}
		Serial.println("");
	}
}