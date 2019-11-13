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
	byte apuntar = 9;
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


private:

};




#endif

