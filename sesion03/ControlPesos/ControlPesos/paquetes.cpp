#include <iostream>
#include "paquetes.h"

double* crearRegistro(int& cantidad) {

    do {
        std::cout << "Cantidad de paquetes: ";
        std::cin >> cantidad;
    } while (cantidad <= 0);

    double* pesos = new double[cantidad];

    return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {

    for (int i = 0; i < cantidad; i++) {

        do {
            std::cout << "Peso del paquete " << i + 1 << " (kg): ";
            std::cin >> pesos[i];
        } while (pesos[i] <= 0);
    }
}

double calcularPesoTotal(const double* pesos, int cantidad) {

    double suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += pesos[i];
    }

    return suma;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {

    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (pesos[i] > limite) {
            contador++;
        }
    }

    return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {

    int masPesado = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pesos[i] > pesos[masPesado]) {
            masPesado = i;
        }
    }

    return &pesos[masPesado];
}
