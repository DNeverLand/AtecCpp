#include <iostream>
#include <string>
#include <windows.h>
#include <tchar.h>

using namespace std;

class Vetores{
	
public:

static void lerVector(int n, double* vec);	
static double calcSaldoMedio(int n,double* vec);
static double calcValorCredito(double sm);
static void imprimirVector(int n,double* vec);	
	
};
