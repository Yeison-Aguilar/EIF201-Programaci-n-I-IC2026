#include "Inversion.h"
#include <iostream>
void InvertirMatriz(int array[], int tamano) {
	int* inversa;

	inversa = new int[tamano];

	for (int i = 0; i < tamano; i++) {
		array[i] = array[tamano - 1 - i];
	}
	for (int i = 0; i < tamano; i++) {
		std::cout << inversa[i];
	}
}