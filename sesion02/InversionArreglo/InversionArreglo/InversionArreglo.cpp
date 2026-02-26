#include <iostream>
#include <cstdlib>
#include "Inversion.h"

int main()
{
    int tamano = 0;
    int* array;
    array = new int[tamano];
    std::cout << "Ingrese el tamano de elementos: "<<std::endl;
    std::cin >> tamano;


    for (int i = 0; i < tamano; i++) {
        array[i] = rand()%20;

    }

    std::cout << "Los elementos serian: "<<std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cout << array[i]<<std::endl;
    }

    InvertirMatriz(array, tamano);
}

