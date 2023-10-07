#include <iostream>
#include"pascall.h"
#define N 4


using namespace std;



int main()
{
	
	//mandando el valor del tamanio, creando el triangulo y mostrando
	pascall t1(5);
	t1.crearTrian();
	t1.muestraT();
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	int ** triangulo;
	triangulo = new int* [N];

	for (int i = 0; i < N; i++) {
		triangulo[i] = new int[i + 1];
		cout << endl;
		for (int j = 0;j <= i;j++) {	
			triangulo[i][j] = 1;
			if (j != 0 && j != 1) {
				triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
			}
			cout << " " << " i[" << i << "] j[" << j << "]   " << triangulo[i][j];
			
		}
	}
	*/
	
}
