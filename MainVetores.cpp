#include "Vetores.h"

int main(){
_tsetlocale(LC_ALL,_T("portuguese"));
	
int n;
double sm;

cout << "Quantos numeros v�o ser?\n";
cin >> n;

double* vec=new double [n];

Vetores::lerVector(n,vec);
sm=Vetores::calcSaldoMedio(n,vec);	
	
if(Vetores::calcValorCredito(sm)==0){
	cout << "N�o tem cr�dito \n";	
}	
else{
	cout << "O seu cr�dito �: " << Vetores::calcValorCredito(sm) << "\n";	
}	

Vetores::imprimirVector(n,vec);
	
system("pause");
return 0;	
}
