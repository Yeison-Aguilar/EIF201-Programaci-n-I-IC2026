#include "matriz.h";
#include <iostream>
#include <iomanip>
using namespace std;

void sumaFilas(int matriz[FILAS][COLS])
{

	for (int i = 0; i < FILAS; i++) {

		int suma = 0;

		for (int j = 0; j < COLS; j++) {
			suma += matriz[i][j];
		}
		cout << endl << "La suma de la fila " << i << ": " << suma;
	}

}

void sumarColumnas(int matriz[FILAS][COLS])
{
	for (int i = 0; i < COLS; i++) {
		int sum = 0;
		for (int j = 0; j < FILAS; j++) {
			sum += matriz[j][i];
		}
		cout << endl << "La suma de la columna " << i << ": " << sum;

	}
}

void imprimirMatriz(int matriz[FILAS][COLS])
{
	cout << endl << "Matriz: " << endl;
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {

			cout << setw(6) << matriz[i][j];
		}
		cout << endl;
	}
}
