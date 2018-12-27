#include "Vetores.h"

void Vetores::lerVector(int n,double* vec){
	
	for(int i=0;i<n;i++){
		cout << "Qual é numero que vai inserir na posição " << i+1 << " do vector ?\n";	
		cin >> vec[i];	
	}		
}

double Vetores::calcSaldoMedio(int n,double* vec){
double saldo=0,saldom;
	
	for(int i=0;i<n;i++){	
		saldo=saldo+vec[i];		
	}
	
saldom=saldo/n;
return saldom;	
}

double Vetores::calcValorCredito(double sm){
int total=0;
	
	if(sm<500){
		return 0;	
	}	
	else{
		if(sm>=500 && sm<1000){
			total=sm*0.15;
			return total;	
		}
		else{
			if(sm>=1000 && sm<5000){
				total=sm*0.30;
				return total;	
			}
			else{
				if(sm>=5000){
					total=sm*0.50;
					return total;	
				}	
			}	
		}	
	}		
}

void Vetores::imprimirVector(int n,double* vec){
	
	for(int i=0;i<n;i++){
		cout << "Na posição " << i+1 << " é este o valor: " << vec[i] << "\n";	
	}		
}

