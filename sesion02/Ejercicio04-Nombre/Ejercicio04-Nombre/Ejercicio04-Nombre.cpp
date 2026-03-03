#include <iostream>
#include "Nombre.h";
#include <string>

int main()
{
    
    std::string nombre;





    std::cout << "Ingrese su nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << "Nombre: " << nombre << std::endl;

    std::cout << "El primer nombre es: " << extraerPrimerNombre(nombre) << std::endl;
    std::cout << "El primer apellido es: " << extraerPrimerApellido(nombre) << std::endl;

    std::cout << "Vocales: " << contarVocales(nombre) << std::endl;
    std::cout << "Las mayusculas son: " << mayusculas(nombre) << std::endl;

    std::cout << "La longitud es: " << longitud(nombre);

}
