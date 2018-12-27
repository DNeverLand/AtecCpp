#include "mat.h"

void Matrizes::lerMatriz(int l,int c,int** mat){
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cout << "Qual é o numero da posição " << i << " das linhas e " << j << " das colunas\n";
			cin >> mat[i][j];	
		}	
	}				
}

void Matrizes::escreverMatriz(int l,int c, int** mat){
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cout << "Posição- [" << i << "]" << "[" << j << "]:" << mat[i][j];	
		}	
	}		
}

bool Matrizes::matQuadrada(int l,int c){
	
	if(l==c){	
		return true;	
	}	
	else{
		return false;	
	}			
}

bool Matrizes::matNula(int l,int c,int** mat){
int valor=0;
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			valor=valor+mat[i][j];	
		}	
	}
	if(valor==0){
		return true;	
	}
	else{
		return false;	
	}
}

bool Matrizes::matIdentidade(int l,int c,int** mat){
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			if(i==j && mat[i][j]==1){	
				conta1++;	
			}
			else{
				if(i!=j && mat[i][j]==0){	
				conta2++;	
			}	
		}	
	}		
}	
	if(conta1==l && conta2==(l*c)-l){
		return true;		
	}
return false;
}

