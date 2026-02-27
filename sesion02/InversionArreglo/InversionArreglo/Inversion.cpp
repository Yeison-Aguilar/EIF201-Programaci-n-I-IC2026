#include "Inversion.h"
#include <iostream>

void InvertirMatriz(int array[], int tamano) {
	int* inversa;

	inversa = new int[tamano];

	for (int i = 0; i < tamano /2; i++) {
		int temp = array[i];
		array[i] = array[tamano - 1 - i];
		array[tamano - 1 - i] = temp;
	}
	std::cout << "Los elementos invertidos serian: " << std::endl;
	for (int i = 0; i < tamano; i++) {
		std::cout << array[i]<<std::endl;
	}
}