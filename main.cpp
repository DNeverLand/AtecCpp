#include "Vectores.h"

using namespace std;

int main(){
_tsetlocale(LC_ALL,_T("portuguese"));
	
int n=10,pos,ele;
int* vec = new int[n];
int* vecord = new int[n];

cout << "Qual é a posição que quer eliminar?\n";
cin >> pos;
cout << "Qual é o elemento que quer eliminar?\n";
cin >> ele;
	
	Vectores::lerVector(n,vec);
	double m = Vectores::mediaVector(n,vec);
	int novon = Vectores::eliminaPosicao(n,vec,pos);
	int eleele = Vectores::eliminaElemento(n,vec,ele);
	int sm = Vectores::segundoMaiorVector(n,vec);
	vecord = Vectores::ordenarVector(n,vec);
	Vectores::mostrarVector(n,vec);

return 0;
}
