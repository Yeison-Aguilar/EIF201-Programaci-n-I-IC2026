#include "EstadisticasArreglo.h"
 
void CalcularMayor(int vector[], int tamano)
{
	int mayor = vector[0];
	for (int i = 0; i < tamano; i++) {
		if (vector[i] > mayor) {
			mayor = vector[i];
		}
		
	}
	std::cout << "El numero mayor es: " << mayor<<std::endl;
}

void CalcularMenor(int vector[], int tamano)
{
	int menor = vector[0];
	for (int i = 0; i < tamano; i++) {
		if (vector[i] < menor) {
			menor = vector[i];
		}
		
	}
	std::cout << "El numero menor es: " << menor<<std::endl;
}

void Suma(int vector[], int tamano)
{
	int suma = vector[0];
	for (int i = 0; i < tamano; i++) {
		suma = suma + vector[i];
	}
	std::cout << "El resultado de la suma es: " << suma << std::endl;
}

void Promedio(int vector[], int tamano)
{
	double promedio;
	int suma = vector[0];
	for (int i = 0; i < tamano; i++) {
		suma = suma + vector[i];
	}
	promedio = static_cast<double>(suma) / tamano; 
	std::cout << "El promedio es igual: "<<promedio<<std::endl;
	
}
