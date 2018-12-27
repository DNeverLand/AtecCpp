#include <iostream>
#include <string>
#include <windows.h>
#include <tchar.h>

using namespace std;

class Matrizes{
	
private:	
	
public:		
	
static void lerMatriz(int l,int c, int** mat);
static void escreverMatriz(int l,int c, int** mat);
static int** criarMatNula(int l,int c, int** mat);

static bool matQuadrada(int l,int c);
static bool matNula(int l,int c,int** mat);
static bool matIdentidade(int l,int c,int** mat); // Verificar Diagonal principal tem de ser 1 e o resto tem que ser 0
static bool matEscalar(int l,int c,int** mat); // Verificar Diagonal principal tem de ser 2 e o resto tem que ser 0
static int** matSoma(int l,int c,int** mat,int** mat2);
static int maiorElementoL(int c, int** mat,int lProcurada);
static int maiorElementoC(int l, int** mat,int cProcurada);
static int** matTransposta(int l,int c,int** mat); // Trocar para outra matriz as colunas para linhas 
/*
1 2
3 4
5 6

1 3 5
2 4 6
*/
static int* matDiagonalPrincipal(int l,int c,int** mat); // Mostrar a diagonal principal, só pode se a matriz for quadrada.
static int* matCentro(int l,int c,int** mat); // Achar o centro da matriz

};
