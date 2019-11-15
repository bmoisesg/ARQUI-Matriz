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
		if (texto[i] == 'a' || texto[i] == 'A' || texto[i] == 'á' || texto[i] == 'Á')letraA(matriz);
		if (texto[i] == 'b' || texto[i] == 'B')letraB(matriz);
		if (texto[i] == 'c' || texto[i] == 'C')letraC(matriz);
		if (texto[i] == 'd' || texto[i] == 'D')letraD(matriz);
		if (texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'é' || texto[i] == 'É')letraE(matriz);
		if (texto[i] == 'f' || texto[i] == 'F')letraF(matriz);
		if (texto[i] == 'g' || texto[i] == 'G')letraG(matriz);
		if (texto[i] == 'h' || texto[i] == 'H')letraH(matriz);
		if (texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'í' || texto[i] == 'Í')letraI(matriz);
		if (texto[i] == 'j' || texto[i] == 'J')letraJ(matriz);
		if (texto[i] == 'k' || texto[i] == 'K')letraK(matriz);
		if (texto[i] == 'l' || texto[i] == 'L')letraL(matriz);
		if (texto[i] == 'm' || texto[i] == 'M')letraM(matriz);
		if (texto[i] == 'n' || texto[i] == 'N')letraN(matriz);
		if (texto[i] == 'o' || texto[i] == 'O' || texto[i] == 'ó' || texto[i] == 'Ó')letraO(matriz);
		if (texto[i] == 'p' || texto[i] == 'P')letraP(matriz);
		if (texto[i] == 'q' || texto[i] == 'Q')letraQ(matriz);
		if (texto[i] == 'r' || texto[i] == 'R')letraR(matriz);
		if (texto[i] == 's' || texto[i] == 'S')letraS(matriz);
		if (texto[i] == 't' || texto[i] == 'T')letraT(matriz);
		if (texto[i] == 'u' || texto[i] == 'U' || texto[i] == 'ú' || texto[i] == 'Ú')letraU(matriz);
		if (texto[i] == 'v' || texto[i] == 'V')letraV(matriz);
		if (texto[i] == 'w' || texto[i] == 'W')letraW(matriz);
		if (texto[i] == 'x' || texto[i] == 'X')letraX(matriz);
		if (texto[i] == 'y' || texto[i] == 'Y')letraY(matriz);
		if (texto[i] == 'z' || texto[i] == 'Z')letraZ(matriz);
		if (texto[i] == '¡')Sexpresion2(matriz);
		if (texto[i] == '!')Sexpresion2(matriz);
		if (texto[i] == '"'|| texto[i] == '\'')Scomilla(matriz);
		if (texto[i] == '#')Snumeral(matriz);
		if (texto[i] == '$')Sdolar(matriz);
		if (texto[i] == '%')Sporcentaje(matriz);
		if (texto[i] == '&')Samperson(matriz);
		if (texto[i] == '(')Spara(matriz);
		if (texto[i] == ')')Sparc(matriz);
		if (texto[i] == '*' ||texto[i]=='×')Spor(matriz);
		if (texto[i] == '+')Smas(matriz);
		if (texto[i] == '-')Smenos(matriz);
		if (texto[i] == '.')Apunto(matriz);
		if (texto[i] == '/'||texto[i] == '÷')Sdiv(matriz);
		if (texto[i] == '1')S1(matriz);
		if (texto[i] == '2')S2(matriz);
		if (texto[i] == '3')S3(matriz);
		if (texto[i] == '4')S4(matriz);
		if (texto[i] == '5')S5(matriz);
		if (texto[i] == '6')S6(matriz);
		if (texto[i] == '7')S7(matriz);
		if (texto[i] == '8')S8(matriz);
		if (texto[i] == '9')S9(matriz);
		if (texto[i] == '0')S0(matriz);
		if (texto[i] == ':')Sdospuntos(matriz);
		if (texto[i] == ';')Spuntocoma(matriz);
		if (texto[i] == '<')Smenor(matriz);
		if (texto[i] == '=')Sigual(matriz);
		if (texto[i] == '>')Smayor(matriz);
		if (texto[i] == '?')Sinterrogacion(matriz);
		if (texto[i] == '@')Sarroba(matriz);
		if (texto[i] == ']')Scorc(matriz);
		if (texto[i] == '[')Scora(matriz);
		if (texto[i] == '\\')SbarraInvertida(matriz);
		if (texto[i] == '^')Selevado(matriz);
		if (texto[i] == '_')Sguionbajo(matriz);
		if (texto[i] == '{')Sllavea(matriz);
		if (texto[i] == '}')Sllavec(matriz);
		if (texto[i] == '~')Sguionraro(matriz);
		if (texto[i] == '|')Spalo(matriz);

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
void MyClass::Sexpresion(byte * *matriz) {


	matriz[1][apuntar + 2] = 1;

	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 2] = 1;


}
void MyClass::Sexpresion2(byte** matriz) {
	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[6][apuntar + 2] = 1;
}
void MyClass::Scomilla(byte * *matriz) {
	matriz[1][apuntar + 1] = 1;		matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 1] = 1;		matriz[2][apuntar + 3] = 1;
}
void MyClass::Snumeral(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;		matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;	matriz[2][apuntar + 1] = 1;	matriz[2][apuntar + 2] = 1;	matriz[2][apuntar + 3] = 1;	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 1] = 1;		matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 1] = 1;		matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar] = 1;	matriz[5][apuntar + 1] = 1;	matriz[5][apuntar + 2] = 1;	matriz[5][apuntar + 3] = 1;	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;		matriz[6][apuntar + 3] = 1;


}
void MyClass::Sdolar(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar] = 1;	matriz[2][apuntar + 1] = 1;	matriz[2][apuntar + 2] = 1;	matriz[2][apuntar + 3] = 1;	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar] = 1;	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 2] = 1;		matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;


}
void MyClass::Sporcentaje(byte * *matriz) {


	matriz[1][apuntar + 1] = 1;			matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 1] = 1;
	matriz[5][apuntar] = 1;			matriz[5][apuntar + 3] = 1;

}
void MyClass::Samperson(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar] = 1;			matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;		matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;			matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;		matriz[6][apuntar + 4] = 1;

}
void MyClass::Spara(byte * *matriz) {

	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 1] = 1;
	matriz[4][apuntar + 1] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 3] = 1;


}
void MyClass::Sparc(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 1] = 1;


}
void MyClass::Spor(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;		matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 1] = 1;		matriz[3][apuntar + 3] = 1;

}
void MyClass::Smas(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;	matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;

}
void MyClass::Smenos(byte * *matriz) {
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;	matriz[3][apuntar + 4] = 1;

}
void MyClass::Scoma(byte * *matriz) {

	matriz[5][apuntar + 2] = 1;	matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;
	matriz[7][apuntar + 3] = 1;

}
void MyClass::Apunto(byte * *matriz) {

	matriz[5][apuntar + 2] = 1;	matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;
}
void MyClass::Sdiv(byte * *matriz) {


	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 1] = 1;
	matriz[6][apuntar] = 1;
}
void MyClass::S1(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar] = 1;		matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;


}
void MyClass::S2(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 1] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::S3(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::S4(byte * *matriz) {

	matriz[1][apuntar] = 1;			matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;			matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar] = 1;			matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 3] = 1;


}
void MyClass::S5(byte * *matriz) {

	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::S6(byte * *matriz) {

	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;
	matriz[3][apuntar] = 1;	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::S7(byte * *matriz) {

	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 1] = 1;
	matriz[6][apuntar] = 1;


}
void MyClass::S8(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;				matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::S9(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 4] = 1;


}
void MyClass::S0(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;			matriz[2][apuntar + 3] = 1;	matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;		matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;	matriz[4][apuntar + 1] = 1;			matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;				matriz[5][apuntar + 4] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::Sdospuntos(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;	matriz[2][apuntar + 3] = 1;

	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 2] = 1;	matriz[5][apuntar + 3] = 1;


}
void MyClass::Spuntocoma(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;	matriz[2][apuntar + 3] = 1;

	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 2] = 1;	matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 3] = 1;

}
void MyClass::Smenor(byte * *matriz) {

	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 1] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 3] = 1;

}
void MyClass::Sigual(byte * *matriz) {
	matriz[2][apuntar] = 1;	matriz[2][apuntar + 1] = 1;	matriz[2][apuntar + 2] = 1;	matriz[2][apuntar + 3] = 1;	matriz[2][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;

}
void MyClass::Smayor(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 1] = 1;

}
void MyClass::Sinterrogacion(byte * *matriz) {
	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;

	matriz[6][apuntar + 2] = 1;
}
void MyClass::Sarroba(byte * *matriz) {

	matriz[1][apuntar] = 1;	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;	matriz[1][apuntar + 4] = 1;
	matriz[2][apuntar] = 1;				matriz[2][apuntar + 4] = 1;
	matriz[3][apuntar] = 1;		matriz[3][apuntar + 2] = 1;		matriz[3][apuntar + 4] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;	matriz[4][apuntar + 4] = 1;
	matriz[5][apuntar] = 1;
	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;


}
void MyClass::Scora(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 1] = 1;
	matriz[3][apuntar + 1] = 1;
	matriz[4][apuntar + 1] = 1;
	matriz[5][apuntar + 1] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::SbarraInvertida(byte * *matriz) {

	matriz[1][apuntar] = 1;
	matriz[2][apuntar + 1] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 4] = 1;



}
void MyClass::Scorc(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;	matriz[1][apuntar + 2] = 1;	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 3] = 1;
	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;


}
void MyClass::Selevado(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar + 1] = 1;		matriz[2][apuntar + 3] = 1;
	matriz[3][apuntar] = 1;				matriz[3][apuntar + 4] = 1;

}
void MyClass::Sguionbajo(byte * *matriz) {

	matriz[6][apuntar] = 1;	matriz[6][apuntar + 1] = 1;	matriz[6][apuntar + 2] = 1;	matriz[6][apuntar + 3] = 1;	matriz[6][apuntar + 4] = 1;
}
void MyClass::Sllavea(byte * *matriz) {

	matriz[1][apuntar + 3] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 1] = 1;	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 1] = 1;	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 3] = 1;


}
void MyClass::Sllavec(byte * *matriz) {

	matriz[1][apuntar + 1] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;	matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar + 2] = 1;	matriz[4][apuntar + 3] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 1] = 1;


}
void MyClass::Sguionraro(byte * *matriz) {

	matriz[3][apuntar + 1] = 1;		matriz[3][apuntar + 3] = 1;
	matriz[4][apuntar] = 1;		matriz[4][apuntar + 2] = 1;		matriz[4][apuntar + 4] = 1;

}
void MyClass::Spalo(byte * *matriz) {

	matriz[1][apuntar + 2] = 1;
	matriz[2][apuntar + 2] = 1;
	matriz[3][apuntar + 2] = 1;
	matriz[4][apuntar + 2] = 1;
	matriz[5][apuntar + 2] = 1;
	matriz[6][apuntar + 2] = 1;


}
void MyClass::toDecimal(byte * *matriz, int tam, byte rclock, byte latch, byte data) {

	double numero = 0;
	int indice = 0;
	for (size_t i = 0; i < tam - 8 + 1; i++)
	{
		indice = 0;
		for (size_t y = 0; y < 8; y++)
		{
			int tmp = 7;
			for (size_t x = 0; x < 8; x++)
			{
				if (matriz[y][apuntar + x] == 1)
				{
					numero = numero + pow(2, tmp);
				}
				tmp--;

			}
			int n = (int)round(numero);

			//Serial.print("-");
			//Serial.println(numero);
			enviar[indice] = n;
			/*
			Serial.print(">");
			Serial.print(enviar[indice]);
			Serial.print(",");
			Serial.print(indice);
			Serial.println();*/
			indice++;
			numero = 0;

		}
		//AQUI YA ESTA LISTO PARA ENVIAR VALORES AL CUBO
		digitalWrite(latch, LOW);
		shiftOut(data, rclock, LSBFIRST, B10000000); //Esta data queda en el ultimo shift register el que tiene el arreglo de transistores darlington ULN2803
		shiftOut(data, rclock, LSBFIRST, enviar[7]); //Esta data queda en el penultimo shift register
		shiftOut(data, rclock, LSBFIRST, enviar[6]);
		shiftOut(data, rclock, LSBFIRST, enviar[5]);
		shiftOut(data, rclock, LSBFIRST, enviar[4]);
		shiftOut(data, rclock, LSBFIRST, enviar[3]);
		shiftOut(data, rclock, LSBFIRST, enviar[2]);
		shiftOut(data, rclock, LSBFIRST, enviar[1]);
		shiftOut(data, rclock, LSBFIRST, enviar[0]); //Esta data queda en el primer shift register
		digitalWrite(latch, HIGH);
		delay(50);
		Serial.println("iteracion");
		apuntar++;
	}


	//Serial.println();
	//Serial.println();


}
