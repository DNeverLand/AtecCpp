#include "mat.h"

void main(){
_tsetlocale(LC_ALL,_T("portuguese"));

int l,c;

	cout << "Quantas linhas tem a matriz?\n";
	cin >> l;
	cout << "Quantas colunas tem a matriz?\n";
	cin >> c;

int** mat = new int*[l];		// Criar
								// Matriz
	for(int i=0; i<l; i++)
		mat[i]=new int[c];

Matrizes::lerMatriz(l,c, mat);

cout << "Agora da 2º matriz: \n";

int** mat2 = new int*[l];		// Criar
								// Matriz
	for(int i=0; i<l; i++)
		mat[i]=new int[c];

Matrizes::lerMatriz(l,c, mat2);

cout << "Qual é a linha que procura ?\n";
cin >> lProcurada;

int linha = Matrizes::maiorElementoL(c,mat,lProcurada);

cout << "Qual é a coluna que procura ?\n";
cin >> cProcurada;

int coluna = Matrizes::maiorElementoC(l,mat,cProcurada);
	
if(Matrizes::matQuadrada(l,c)==true){
	cout << "É quadrada !\n";		
}
else{
	cout << "Não é quadrada !\n";	
}

if(Matrizes::matNula(l,c,mat)==true){
	cout << "Matriz é nula !\n";
}
else{
	cout << "Matriz não é nula !\n";	
}

if(Matrizes::matIdentidade(l,c,mat)==true){
	cout << "Matriz é uma identidade";	
}
else{
	cout << "Matriz não é uma identidade";	
}

if(Matrizes::matEscalar(l,c,mat)==true){
	cout << "Matriz é escalar";	
}
else{
	cout << "Matriz não é escalar";	
}

int maiorEl=Matrizes::maiorElementoL(c,mat,lProcurada);
int maiorEc=Matrizes::maiorElementoC(l,mat,cProcurada);


Matrizes::escreverMatriz(l,c,mat);		
}
