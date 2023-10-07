#include "pascall.h"
#include<iostream>
using namespace std;

// Usuario externo asiendo modificaciones >> Yonatha Ramirez
pascall::pascall(int n) {
	triangulo = new int* [n];
	N = n;
	for (int i = 0; i < n; i++) {
		triangulo[i] = new int[i + 1];
		for (int j = 0;j <= i;j++) {
			triangulo[i][j] = 1;
		}
	}
}
	void pascall::crearTrian() {
		for (int i = 2; i < N; i++) {
			cout << endl;
			for (int j = 1;j < i;j++) {
					triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
			}
		}


	}
	

	void pascall::muestraT() {		
		for (int i = 0; i < N; i++) {
			cout << endl;
			for (int j = 0;j <= i;j++) {
				cout << triangulo[i][j] << " ";
			}
		}
	}

	
