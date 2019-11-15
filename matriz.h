// matriz.h

#ifndef _MATRIZ_h
#define _MATRIZ_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif


class MyClass
{
public:
	//atributos
	byte apuntar = 9;
	int enviar[8];
	//metodos
	MyClass();
	byte** nuevaMatriz(byte filas, byte columnas);
	void llenarMatriz(byte** mat, byte f, byte c);
	void imprimirMatriz(byte** mat, byte fila, byte col);
	void matrizSetText(byte**, String);
	void letraA(byte** matriz);
	void letraB(byte** matriz);
	void letraC(byte** matriz);
	void letraD(byte** matriz);
	void letraE(byte** matriz);
	void letraF(byte** matriz);
	void letraG(byte** matriz);
	void letraH(byte** matriz);
	void letraJ(byte** matriz);
	void letraI(byte** matriz);
	void letraK(byte** matriz);
	void letraL(byte** matriz);
	void letraM(byte** matriz);
	void letraN(byte** matriz);
	void letraO(byte** matriz);
	void letraP(byte** matriz);
	void letraQ(byte** matriz);
	void letraR(byte** matriz);
	void letraS(byte** matriz);
	void letraT(byte** matriz);
	void letraU(byte** matriz);
	void letraV(byte** matriz);
	void letraW(byte** matriz);
	void letraX(byte** matriz);
	void letraY(byte** matriz);
	void letraZ(byte** matriz);
	void Sexpresion(byte** matriz);
	void Sexpresion2(byte** matriz);
	void Scomilla(byte** matriz);
	void Snumeral(byte** matriz);
	void Sdolar(byte** matriz);
	void Sporcentaje(byte** matriz);
	void Samperson(byte** matriz);
	void Spara(byte** matriz);
	void Sparc(byte** matriz);
	void Spor(byte** matriz);
	void Smas(byte** matriz);
	void Smenos(byte** matriz);
	void Scoma(byte** matriz);
	void Apunto(byte** matriz);
	void Sdiv(byte** matriz);
	void S1(byte** matriz);
	void S2(byte** matriz);
	void S3(byte** matriz);
	void S4(byte** matriz);
	void S5(byte** matriz);
	void S6(byte** matriz);
	void S7(byte** matriz);
	void S8(byte** matriz);
	void S9(byte** matriz);
	void S0(byte** matriz);
	void Sdospuntos(byte** matriz);
	void Spuntocoma(byte** matriz);
	void Smenor(byte** matriz);
	void Sigual(byte** matriz);
	void Smayor(byte** matriz);
	void Sinterrogacion(byte** matriz);
	void Sinterrogacion2(byte** matriz);
	void Sarroba(byte** matriz);
	void Scora(byte** matriz);
	void SbarraInvertida(byte** matriz);
	void Scorc(byte** matriz);
	void Selevado(byte** matriz);
	void Sguionbajo(byte** matriz);
	void Sllavea(byte ** matriz);
	void Sllavec(byte** matriz);
	void Sguionraro(byte** matriz);
	void Spalo(byte** matriz);


	void toDecimal(byte** matriz, int tam, byte rclock, byte latch, byte data);

private:

};




#endif

