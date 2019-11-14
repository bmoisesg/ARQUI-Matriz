// 
// 
// 

#include "matriz.h"
#include <math.h>
MyClass::MyClass()
{
}


byte** MyClass::nuevaMatriz(byte filas, byte columnas) {

	byte** ma;
	ma = new byte * [filas];

	for (int i = 0; i < filas; i++) {
		ma[i] = new byte[columnas];
	}
	llenarMatriz(ma, filas, columnas);

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
void MyClass::matrizSetText(byte** matriz, String texto) {

	for (size_t i = 0; i < texto.length(); i++)
	{
		if (texto[i] == 'a' || texto[i] == 'A')letraA(matriz);
		if (texto[i] == 'b' || texto[i] == 'B')letraB(matriz);
		if (texto[i] == 'c' || texto[i] == 'C')letraC(matriz);
		if (texto[i] == 'd' || texto[i] == 'D')letraD(matriz);
		if (texto[i] == 'e' || texto[i] == 'E')letraE(matriz);
		if (texto[i] == 'f' || texto[i] == 'F')letraF(matriz);
		if (texto[i] == 'g' || texto[i] == 'G')letraG(matriz);
		if (texto[i] == 'h' || texto[i] == 'H')letraH(matriz);
		if (texto[i] == 'i' || texto[i] == 'I')letraI(matriz);
		if (texto[i] == 'j' || texto[i] == 'J')letraJ(matriz);
		if (texto[i] == 'k' || texto[i] == 'K')letraK(matriz);
		if (texto[i] == 'l' || texto[i] == 'L')letraL(matriz);
		if (texto[i] == 'm' || texto[i] == 'M')letraM(matriz);
		if (texto[i] == 'n' || texto[i] == 'N')letraN(matriz);
		if (texto[i] == 'o' || texto[i] == 'O')letraO(matriz);
		if (texto[i] == 'p' || texto[i] == 'P')letraP(matriz);
		if (texto[i] == 'q' || texto[i] == 'Q')letraQ(matriz);
		if (texto[i] == 'r' || texto[i] == 'R')letraR(matriz);
		if (texto[i] == 's' || texto[i] == 'S')letraS(matriz);
		if (texto[i] == 't' || texto[i] == 'T')letraT(matriz);
		if (texto[i] == 'u' || texto[i] == 'U')letraU(matriz);
		if (texto[i] == 'v' || texto[i] == 'V')letraV(matriz);
		if (texto[i] == 'w' || texto[i] == 'W')letraW(matriz);
		if (texto[i] == 'x' || texto[i] == 'X')letraX(matriz);
		if (texto[i] == 'y' || texto[i] == 'Y')letraY(matriz);
		if (texto[i] == 'z' || texto[i] == 'Z')letraZ(matriz);

		this->apuntar = apuntar + 6;
	}
}
void MyClass::letraA(byte * *matriz) {

	matriz[1][apuntar] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;
	matriz[4][apuntar] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;

	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 4] = 1;

	matriz[1][apuntar + 1] = 1;
	matriz[3][apuntar + 1] = 1;
	matriz[1][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[1][apuntar + 3] = 1;
	matriz[3][apuntar + 3] = 1;

}
void MyClass::letraB(byte * *matriz) {
	matriz[1][apuntar] = 1;
	matriz[1][apuntar + 1] = 1;
	matriz[1][apuntar + 2] = 1;
	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;
	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;
	matriz[3][apuntar + 1] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;
	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;
	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;
	matriz[6][apuntar + 1] = 1;
	matriz[6][apuntar + 2] = 1;
	matriz[6][apuntar + 3] = 1;


}
void MyClass::letraC(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;
	matriz[4][apuntar] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraD(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;
}
void MyClass::letraE(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraF(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;
}
void MyClass::letraG(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;			matriz[3][apuntar + 3] = 1;	matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraH(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;	matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraJ(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;			matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar] = 1;			matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;
}
void MyClass::letraI(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraK(byte * *matriz) {
	matriz[1][apuntar] = 1;			matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;		matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar] = 1;			matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraL(byte * *matriz) {
	matriz[1][apuntar] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;
	matriz[4][apuntar] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraM(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;	matriz[2][apuntar + 1] = 1;		matriz[2][apuntar + 3] = 1;	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;		matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraN(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;	matriz[2][apuntar + 1] = 1;			matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;		matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;			matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraO(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraP(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;
}
void MyClass::letraQ(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;		matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;			matriz[5][apuntar + 3] = 1;	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraR(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraS(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;	matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraT(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 2] = 1;
}
void MyClass::letraU(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::letraV(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 1] = 1;		matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 2] = 1;
}
void MyClass::letraW(byte * *matriz) {
	matriz[1][apuntar] = 1;		matriz[1][apuntar + 2] = 1;		matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;		matriz[2][apuntar + 2] = 1;		matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;		matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;		matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;		matriz[5][apuntar + 2] = 1;		matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;		matriz[6][apuntar + 3] = 1;
}
void MyClass::letraX(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 1] = 1;		matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 1] = 1;		matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;				matriz[6][apuntar + 4] = 1;
}
void MyClass::letraY(byte * *matriz) {
	matriz[1][apuntar] = 1;				matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 1] = 1;		matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 2] = 1;
}
void MyClass::letraZ(byte * *matriz) {
	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 1] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}

int MyClass::toDecimal(byte * *matriz, int tam) {

	double numero = 0;
	int n = 0;
	for (size_t i = 0; i < tam - 8+1; i++)
	{

		
		
		n = 0;
		for (size_t y = 0; y < 8; y++)
		{

			int tmp = 7;
			for (size_t x = 0; x < 8; x++)
			{
				
				if (matriz[y][apuntar+x] == 1)
				{
					numero = numero + pow(2, tmp);
				}
				tmp--;

			}
			int n = (int)round(numero);
			Serial.print(n);
			Serial.print(",");
			//Serial.print("-");
			//Serial.println(numero);
			numero = 0;

		}
		Serial.println();
		apuntar++;
	}


	Serial.println();
	Serial.println();


	return n;

}
