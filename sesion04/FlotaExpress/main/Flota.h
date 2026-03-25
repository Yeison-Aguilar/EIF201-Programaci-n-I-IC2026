#ifndef FLOTA_H
#define FLOTA_H
#include "Vehiculo.h"

namespace UNA {
	class Flota
	{
	private:

		Vehiculo** vehiculo;
		int cantidad;
		int capacidad;
		bool activo;


	public:

		Flota();



		void agregar(Vehiculo* nuevo);

		Vehiculo* buscarPorPlaca(std::string placa);

		void mostrarPorMarca(std::string marca);

		bool eliminar(std::string placa);

		int contarActivos();

		void mostrarTodos();






		~Flota();
	};

}
#endif // FLOTA_H


