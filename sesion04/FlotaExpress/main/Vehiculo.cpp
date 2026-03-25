#include "Vehiculo.h"
#include <iostream>

namespace UNA {
	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje)
	{
		this->placa = placa;
		this->marca = marca;
		this->anio = anio;
		this->kilometraje = kilometraje;
		this->activo = true;
	}

	std::string Vehiculo::getPlaca() const
	{
		return placa;
	}

	std::string Vehiculo::getMarca() const
	{
		return marca;
	}

	int Vehiculo::getAnio() const
	{
		return anio;
	}

	double Vehiculo::getKilometraje() const
	{
		return kilometraje;
	}

	bool Vehiculo::getActivo() const
	{
		return activo;
	}

	void Vehiculo::registrarKilometros(double km)
	{

		if (km <= 0) {
			std::cout << "Error";
			return;
		}
		if (!activo) {
			std::cout << "El vehiculo esta fuera de servicio";
			return;
		}
		kilometraje += km;
	}

	void Vehiculo::desactivar()
	{
		if (activo == false) {
			std::cout << "Error. El vehiculo esta fuera de servicio";
		}
		else {
			activo = false;
		}
	}

	void Vehiculo::reactivar()
	{
		if (activo == true) {
			std::cout << "El vehiculo esta activo";
		}
		else {
			activo = true;
		}
	}

	void Vehiculo::mostrar() const
	{

		std::cout << "Placa: " << placa << std::endl;

		std::cout << "Marca: " << marca << std::endl;

		std::cout << "Anio: " << anio << std::endl;

		std::cout << "Kilometraje: " << kilometraje << std::endl;

		if (activo) {
			std::cout << "Estado: Activo" << std::endl;
		}
		else {
			std::cout << "Estado: Fuera de servicio" << std::endl;
		}

		std::cout << "-----------------------------" << std::endl;


	}

}

