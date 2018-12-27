
#include "Vectores.h"

using namespace std;

void Vectores::lerVector(int n, int* vec){
	
	for(int i=0;i<n;i++){
		
		cout << "vec[" << i << "]=";
		cin >> vec[i];	
	}			
}

double Vectores::mediaVector(int n, int* vec){

double soma=0, media;
	for(int i=0; i<n; i++){
		soma += vec[i];
	}
media=soma/n;

return media;
}

void Vectores::mostrarVector(int n, int* vec){

	for(int i=0; i<n; i++){
		cout << "vec[" << i << "]=" << vec[i] << "\n";
	}
}

int Vectores::eliminaPosicao(int n, int* vec,int pos){
	
	for(int i=pos-1;i<n;i++){
		vec[i]=vec[i+1];			
	}
	
return n-1;
}

int Vectores::eliminaElemento(int n, int* vec,int ele){
int conta=0,i;
	
	for(i=0;i<n;i++){
		if(vec[i]==ele){
		
			vec[i]=vec[i+1];
			conta++;	
		}		
	}
return n-conta;		
}

int Vectores::segundoMaiorVector(int n, int*vec){
int maior=0,i,segundom=0;
	
	for(i=0;i<n;i++){
		if(vec[i]>maior){
			maior=vec[i];
		}
	}	
	for(i=0;i<n;i++){
		if(vec[i]<maior && vec[i]>segundom){
			segundom=vec[i];		
		}	
	}
return segundom;	
}

int* Vectores::ordenarVector(int n, int* vec){
int aux,i,j,vec1;	
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(vec[i]>vec[j]){
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}		
		}	
	}		
return vec;
}
