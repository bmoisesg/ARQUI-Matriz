

#include "matriz.h"

MyClass thisClass = MyClass();
String texto = "mariita";
byte enviar[8];
byte apuntador = 9;
byte** matriz;

void setup()
{
	Serial.begin(9600);
	
	int tam = texto.length();
	tam = tam * 6 + 8;
	
	Serial.println(tam);
	Serial.println();

	matriz = thisClass.nuevaMatriz(8, tam);
	
	for (size_t i = 0; i < texto.length(); i++)
	{
		if (texto[i] == 'a' || texto[i] == 'A')letraA();
		if (texto[i] == 'b' || texto[i] == 'B')letraB();
		if (texto[i] == 'c' || texto[i] == 'C')letraC();
		if (texto[i] == 'd' || texto[i] == 'D')letraD();
		if (texto[i] == 'e' || texto[i] == 'E')letraE();
		if (texto[i] == 'f' || texto[i] == 'F')letraF();
		if (texto[i] == 'g' || texto[i] == 'G')letraG();
		if (texto[i] == 'h' || texto[i] == 'H')letraH();
		if (texto[i] == 'i' || texto[i] == 'I')letraI();
		if (texto[i] == 'j' || texto[i] == 'J')letraJ();
		if (texto[i] == 'k' || texto[i] == 'K')letraK();
		if (texto[i] == 'l' || texto[i] == 'L')letraL();
		if (texto[i] == 'm' || texto[i] == 'M')letraM();
		if (texto[i] == 'n' || texto[i] == 'N')letraN();
		if (texto[i] == 'o' || texto[i] == 'O')letraO();
		if (texto[i] == 'p' || texto[i] == 'P')letraP();
		if (texto[i] == 'q' || texto[i] == 'Q')letraQ();
		if (texto[i] == 'r' || texto[i] == 'R')letraR();
		if (texto[i] == 's' || texto[i] == 'S')letraS();
		if (texto[i] == 't' || texto[i] == 'T')letraT();
		if (texto[i] == 'u' || texto[i] == 'U')letraU();
		if (texto[i] == 'v' || texto[i] == 'V')letraV();
		if (texto[i] == 'w' || texto[i] == 'W')letraW();
		if (texto[i] == 'x' || texto[i] == 'X')letraX();
		if (texto[i] == 'y' || texto[i] == 'Y')letraY();
		if (texto[i] == 'z' || texto[i] == 'Z')letraZ();
		apuntador = apuntador + 6;
	}

	thisClass.imprimirMatriz(matriz, 8, tam);

}

// Add the main program code into the continuous loop() function
void loop()
{


}
void letraA() {

	matriz[1][apuntador] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;
	matriz[4][apuntador] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;

	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador + 4] = 1;

	matriz[1][apuntador + 1] = 1;
	matriz[3][apuntador + 1] = 1;
	matriz[1][apuntador + 2] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[1][apuntador + 3] = 1;
	matriz[3][apuntador + 3] = 1;

}
void letraB() {
	matriz[1][apuntador] = 1;
	matriz[1][apuntador + 1] = 1;
	matriz[1][apuntador + 2] = 1;
	matriz[1][apuntador + 3] = 1;
	matriz[2][apuntador] = 1;
	matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;
	matriz[3][apuntador + 1] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador] = 1;
	matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;
	matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;
	matriz[6][apuntador + 1] = 1;
	matriz[6][apuntador + 2] = 1;
	matriz[6][apuntador + 3] = 1;


}
void letraC() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;
	matriz[4][apuntador] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraD() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;
}
void letraE() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;	matriz[3][apuntador + 2] = 1;	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraF() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;	matriz[3][apuntador + 2] = 1;	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;
}
void letraG() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;			matriz[3][apuntador + 3] = 1;	matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraH() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;	matriz[3][apuntador + 2] = 1;	matriz[3][apuntador + 3] = 1;	matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraJ() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 3] = 1;
	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador] = 1;			matriz[4][apuntador + 3] = 1;
	matriz[5][apuntador] = 1;			matriz[5][apuntador + 3] = 1;
	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;
}
void letraI() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 2] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[4][apuntador + 2] = 1;
	matriz[5][apuntador + 2] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraK() {
	matriz[1][apuntador] = 1;			matriz[1][apuntador + 3] = 1;
	matriz[2][apuntador] = 1;		matriz[2][apuntador + 2] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;
	matriz[4][apuntador] = 1;		matriz[4][apuntador + 2] = 1;
	matriz[5][apuntador] = 1;			matriz[5][apuntador + 3] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraL() {
	matriz[1][apuntador] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;
	matriz[4][apuntador] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraM() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;	matriz[2][apuntador + 1] = 1;		matriz[2][apuntador + 3] = 1;	matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;		matriz[3][apuntador + 2] = 1;		matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraN() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;	matriz[2][apuntador + 1] = 1;			matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;		matriz[3][apuntador + 2] = 1;		matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;			matriz[4][apuntador + 3] = 1;	matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraO() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraP() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;	matriz[4][apuntador + 1] = 1;	matriz[4][apuntador + 2] = 1;	matriz[4][apuntador + 3] = 1;	matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;
	matriz[6][apuntador] = 1;
}
void letraQ() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;		matriz[4][apuntador + 2] = 1;		matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;			matriz[5][apuntador + 3] = 1;	matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraR() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;	matriz[3][apuntador + 2] = 1;	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraS() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;
	matriz[3][apuntador] = 1;	matriz[3][apuntador + 1] = 1;	matriz[3][apuntador + 2] = 1;	matriz[3][apuntador + 3] = 1;	matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraT() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 2] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[4][apuntador + 2] = 1;
	matriz[5][apuntador + 2] = 1;
	matriz[6][apuntador + 2] = 1;
}
void letraU() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}
void letraV() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;				matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;				matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;				matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador + 1] = 1;		matriz[5][apuntador + 3] = 1;
	matriz[6][apuntador + 2] = 1;
}
void letraW() {
	matriz[1][apuntador] = 1;		matriz[1][apuntador + 2] = 1;		matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador] = 1;		matriz[2][apuntador + 2] = 1;		matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador] = 1;		matriz[3][apuntador + 2] = 1;		matriz[3][apuntador + 4] = 1;
	matriz[4][apuntador] = 1;		matriz[4][apuntador + 2] = 1;		matriz[4][apuntador + 4] = 1;
	matriz[5][apuntador] = 1;		matriz[5][apuntador + 2] = 1;		matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador + 1] = 1;		matriz[6][apuntador + 3] = 1;
}
void letraX() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 1] = 1;		matriz[2][apuntador + 3] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[4][apuntador + 1] = 1;		matriz[4][apuntador + 3] = 1;
	matriz[5][apuntador] = 1;				matriz[5][apuntador + 4] = 1;
	matriz[6][apuntador] = 1;				matriz[6][apuntador + 4] = 1;
}
void letraY() {
	matriz[1][apuntador] = 1;				matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 1] = 1;		matriz[2][apuntador + 3] = 1;
	matriz[3][apuntador + 2] = 1;
	matriz[4][apuntador + 2] = 1;
	matriz[5][apuntador + 2] = 1;
	matriz[6][apuntador + 2] = 1;
}
void letraZ() {
	matriz[1][apuntador] = 1;	matriz[1][apuntador + 1] = 1;	matriz[1][apuntador + 2] = 1;	matriz[1][apuntador + 3] = 1;	matriz[1][apuntador + 4] = 1;
	matriz[2][apuntador + 4] = 1;
	matriz[3][apuntador + 3] = 1;
	matriz[4][apuntador + 2] = 1;
	matriz[5][apuntador + 1] = 1;
	matriz[6][apuntador] = 1;	matriz[6][apuntador + 1] = 1;	matriz[6][apuntador + 2] = 1;	matriz[6][apuntador + 3] = 1;	matriz[6][apuntador + 4] = 1;
}