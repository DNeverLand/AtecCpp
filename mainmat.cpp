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

cout << "Agora da 2� matriz: \n";

int** mat2 = new int*[l];		// Criar
								// Matriz
	for(int i=0; i<l; i++)
		mat[i]=new int[c];

Matrizes::lerMatriz(l,c, mat2);

cout << "Qual � a linha que procura ?\n";
cin >> lProcurada;

int linha = Matrizes::maiorElementoL(c,mat,lProcurada);

cout << "Qual � a coluna que procura ?\n";
cin >> cProcurada;

int coluna = Matrizes::maiorElementoC(l,mat,cProcurada);
	
if(Matrizes::matQuadrada(l,c)==true){
	cout << "� quadrada !\n";		
}
else{
	cout << "N�o � quadrada !\n";	
}

if(Matrizes::matNula(l,c,mat)==true){
	cout << "Matriz � nula !\n";
}
else{
	cout << "Matriz n�o � nula !\n";	
}

if(Matrizes::matIdentidade(l,c,mat)==true){
	cout << "Matriz � uma identidade";	
}
else{
	cout << "Matriz n�o � uma identidade";	
}

if(Matrizes::matEscalar(l,c,mat)==true){
	cout << "Matriz � escalar";	
}
else{
	cout << "Matriz n�o � escalar";	
}

int maiorEl=Matrizes::maiorElementoL(c,mat,lProcurada);
int maiorEc=Matrizes::maiorElementoC(l,mat,cProcurada);


Matrizes::escreverMatriz(l,c,mat);		
}
