#include <iostream>
#include <string>
#include <windows.h>
#include <tchar.h>

class Vectores{
	
private:	
	
public:

	static void lerVector(int n,int* vec);
	static double mediaVector(int n, int* vec);
	static void mostrarVector(int n, int* vec);
	static int eliminaPosicao(int n, int* vec, int pos);
	static int eliminaElemento(int n, int* vec,int ele);
	static int segundoMaiorVector(int n, int* vec);
	static int* ordenarVector(int n, int* vec);
};
