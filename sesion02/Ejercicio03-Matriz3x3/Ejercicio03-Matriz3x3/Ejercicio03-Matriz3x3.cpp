#include <iostream>
using namespace std;
#include "matriz.h";


int main()
{
    int matriz[FILAS][COLS];

    cout << "Ingrese los valores de la matriz: " << endl;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Fila " << i << " Columna " << j << ": ";
            cin >> matriz[i][j];
        }
    }



    sumaFilas(matriz);

    sumarColumnas(matriz);

    imprimirMatriz(matriz);





}
