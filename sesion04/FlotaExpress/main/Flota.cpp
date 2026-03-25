#include "Flota.h"
#include <iostream>
#include "Vehiculo.h"

namespace UNA {

	Flota::Flota()
	{
		capacidad = 3;
		cantidad = 0;
		vehiculo = new Vehiculo * [capacidad];
	}

	void Flota::agregar(Vehiculo* nuevo)
	{
		if (cantidad == capacidad) {
			std::cout << "La flota esa llena";
			int nuevaCapacidad = capacidad * 2;

			Vehiculo** nuevo = new Vehiculo * [nuevaCapacidad];

			for (int i = 0; i < cantidad; i++) {
				nuevo[i] = vehiculo[i];
			}

			delete[] vehiculo;

			vehiculo = nuevo;
			capacidad = nuevaCapacidad;


		}
		vehiculo[cantidad] = nuevo;
		cantidad++;
	}

	Vehiculo* Flota::buscarPorPlaca(std::string placa)
	{
		for (int i = 0; i < cantidad; i++) {
			if (vehiculo[i]->getPlaca() == placa) {
				return vehiculo[i];
			}
		}
		return nullptr;
	}

	void Flota::mostrarPorMarca(std::string marca)
	{
		int contador = 0;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculo[i]->getMarca() == marca) {
				vehiculo[i]->mostrar();
				contador++;
			}
		}
		if (contador == 0) {
			std::cout << "No hay vehiculos de la marca";

		}
		else {
			std::cout << "Total de vehiculos de la marca " << marca << ": " << contador << std::endl;
		}
	}

	bool Flota::eliminar(std::string placa)
	{
		for (int i = 0; i < cantidad; i++) {
			if (vehiculo[i]->getPlaca() == placa) {
				if (vehiculo[i]->getActivo()) {
					std::cout << "Debe desactivar el vehiculo antes de eliminarlo" << std::endl;
					return false;
				}
				delete vehiculo[i];

				for (int j = i; j < cantidad - 1; j++) {
					vehiculo[j] = vehiculo[j + 1];

				}
				cantidad--;
				return true;
			}




		}
		std::cout << "Vehiculo no encontrado" << std::endl;
		return false;
	}

	int Flota::contarActivos()
	{
		int contador = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculo[i]->getActivo()) {
				contador++;
			}
		}
		return contador;
	}

	void Flota::mostrarTodos()
	{
		if (cantidad == 0) {
			std::cout << "Error. No hay para mostrar";
			return;
		}
		std::cout << "===Lista de vehiculos===" << std::endl;
		for (int i = 0; i < cantidad; i++) {
			vehiculo[i]->mostrar();
		}




	}

	Flota::~Flota()
	{
		for (int i = 0; i < cantidad; i++) {
			delete vehiculo[i];
		}

		delete[] vehiculo;
		vehiculo = nullptr;
	}

}
