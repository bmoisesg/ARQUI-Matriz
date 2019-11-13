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
	MyClass();
	byte** nuevaMatriz(byte filas, byte columnas);
	void llenarMatriz(byte** mat, byte f, byte c);
	void imprimirMatriz(byte** mat, byte fila, byte col);


private:

};




#endif

