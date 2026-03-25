#include <iostream>
#include "vehiculo.h"
#include "Flota.h"
using namespace UNA;

int mostrarMenu() {

    int opcion;

    std::cout << "----Menu----" << std::endl;
    std::cout << "1. Registrar vehiculo" << std::endl;
    std::cout << "2. Buscar vehiculo por placa" << std::endl;
    std::cout << "3. Mostrar vehiculo por marca" << std::endl;
    std::cout << "4. Registrar kilometros a un vehiculo" << std::endl;
    std::cout << "5. Desactivar vehiculo (fuera de servicio)" << std::endl;
    std::cout << "6. Reactivar vehiculo" << std::endl;
    std::cout << "7. Eliminar vehiculo (dar de baja definitiva)" << std::endl;
    std::cout << "8. Mostrar flota completa" << std::endl;
    std::cout << "9. Mostrar cantidad de vehiculos" << std::endl;
    std::cout << "10. Salir" << std::endl;

    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    return opcion;

}

int main()
{
    UNA::Flota flota;




    bool ejecutando = true;

    while (ejecutando) {

        int opcion = mostrarMenu();

        switch (opcion) {

        case 1: {
            std::string placa, marca;
            int anio;
            double km;
            std::cout << "Ingrese placa del vehiculo: ";
            std::cin >> placa;
            std::cout << "Ingrese marca del vehiculo: ";
            std::cin >> marca;
            std::cout << "Ingrese anio del vehiculo: ";
            std::cin >> anio;
            std::cout << "Ingrese kilometraje del vehiculo: ";
            std::cin >> km;


            flota.agregar(new Vehiculo(placa, marca, anio, km));
            break;
        }

        case 2: {
            std::string placa;
            std::cout << "Ingrese placa del vehiculo a buscar: ";
            std::cin >> placa;

            Vehiculo* vehiculo = flota.buscarPorPlaca(placa);
            std::cout << "Resultado de la busqueda: " << std::endl;
            if (vehiculo) {
                vehiculo->mostrar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }

            break;
        }

        case 3: {
            std::string marca;
            std::cout << "Ingrese marca del vehiculo a mostrar: ";
            std::cin >> marca;
            flota.mostrarPorMarca(marca);
            break;
        }

        case 4: {
            std::string placa;
            double km;

            std::cout << "Ingrese placa del vehiculo para registrar kilometros: ";
            std::cin >> placa;
            Vehiculo* vehiculo = flota.buscarPorPlaca(placa);

            if (vehiculo != nullptr) {
                std::cout << "Ingrese kilometros a registrar: ";
                std::cin >> km;
                vehiculo->registrarKilometros(km);
            }
            break;
        }

        case 5: {
            std::string placa;
            std::cout << "Ingrese placa del vehiculo a desactivar: ";
            std::cin >> placa;

            Vehiculo* vehiculo = flota.buscarPorPlaca(placa);
            if (vehiculo != nullptr) {
                vehiculo->desactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 6: {
            std::string placa;
            std::cout << "Ingrese placa del vehiculo a reactivar: ";
            std::cin >> placa;

            Vehiculo* vehiculo = flota.buscarPorPlaca(placa);
            if (vehiculo != nullptr) {
                vehiculo->reactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 7: {
            std::string placa;
            std::cout << "Ingrese placa del vehiculo a eliminar: ";
            std::cin >> placa;
            if (flota.eliminar(placa)); {
                std::cout << "Vehiculo eliminado" << std::endl;
            }
            break;
        }

        case 8:
            flota.mostrarTodos();
            break;

        case 9:
            std::cout << "Activos: " << flota.contarActivos() << std::endl;
            break;

        case 10:
            ejecutando = false;
            break;

        default:
            std::cout << "Opcion invalida\n";
        }
    }
}
