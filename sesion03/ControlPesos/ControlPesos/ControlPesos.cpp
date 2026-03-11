#include <iostream>
#include "paquetes.h"

int main() {

    int cantidad;

    double* pesos = crearRegistro(cantidad);

    ingresarPesos(pesos, cantidad);

    double total = calcularPesoTotal(pesos, cantidad);
    double promedio = total / cantidad;

    std::cout << "Peso total: " << total << " kg"<<std::endl;
    std::cout << "Promedio: " << promedio << " kg"<<std::endl;

    double limite;
    std::cout << "Digite el limite de peso: ";
    std::cin >> limite;

    int sobreLimite = contarSobreLimite(pesos, cantidad, limite);
    std::cout << "Paquetes sobre el limite: " << sobreLimite <<std::endl;

    const double* masPesado = buscarMasPesado(pesos, cantidad);

    std::cout << "Paquete mas pesado: " << *masPesado << " kg"<<std::endl;

    delete[] pesos;

    return 0;
}