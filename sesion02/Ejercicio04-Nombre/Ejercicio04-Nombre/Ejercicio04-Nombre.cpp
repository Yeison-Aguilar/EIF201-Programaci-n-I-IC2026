#include <iostream>
#include "Nombre.h";
#include <string>

int main()
{
    
    std::string nombre;

    std::cout << "Ingrese su nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << "Nombre: " << nombre << std::endl;

    int opcion;
    do {
		
        std::cout << "1. Extraer primer nombre" << std::endl;
        std::cout << "2. Extraer primer apellido" << std::endl;
        std::cout << "3. Contar vocales" << std::endl;
        std::cout << "4. Convertir a mayusculas" << std::endl;
        std::cout << "5. Longitud del nombre" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;
        
        switch (opcion) {
        case 1:
            std::cout <<std::endl<< "El primer nombre es: " << extraerPrimerNombre(nombre) << std::endl;
            break;
        case 2:
            std::cout <<std::endl<< "El primer apellido es: " << extraerPrimerApellido(nombre) << std::endl;
            break;
        case 3:
            std::cout <<std::endl<< "Vocales: " << contarVocales(nombre) << std::endl;
            break;
        case 4:
            std::cout <<std::endl<< "En mayusculas: " << mayusculas(nombre) << std::endl;
            break;
        case 5:
            std::cout <<std::endl<< "La longitud es: " << longitud(nombre) << std::endl;
            break;
        default:
            std::cout <<std::endl<< "Opcion no valida" << std::endl;

        }

    } while (opcion != 5);
    

     
    
}
