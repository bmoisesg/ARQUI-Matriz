

#include "matriz.h"
MyClass thisClass = MyClass();
String texto = "yomara";
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
	letraY();
	apuntador = apuntador + 6;
	letraO();
	apuntador = apuntador + 6;
	letraM();
	apuntador = apuntador + 6;
	letraA();
	apuntador = apuntador + 6;
	letraR();
	apuntador = apuntador + 6;
	letraA();
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