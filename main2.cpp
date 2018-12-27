#include "exervec.h"

using namespace std;

void main(){
_tsetlocale(LC_ALL,_T("portuguese"));	
	
cout << "Quantos inteiros são ?";
cin >> n;

int* vec = new int[n];

Exervec::lerVector(n, vec);
Exervec::mostrarVector(n, vec);
Exervec::inversoVector(n, vec);
}
