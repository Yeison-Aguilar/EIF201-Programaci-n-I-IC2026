#include "Nombre.h";
#include <iostream>
#include <cctype>

std::string extraerPrimerNombre(std::string nombre)
{
	int primerEspacio = nombre.find(' ');

	return nombre.substr(0, primerEspacio);
}

std::string extraerPrimerApellido(std::string nombre)
{
	int primerEspacio = nombre.find(' ');
	int segundoEspacio = nombre.find(' ', primerEspacio + 1);
	return nombre.substr(primerEspacio + 1, segundoEspacio - primerEspacio - 1);

}

int contarVocales(std::string nombre) {

	int vocales = 0;
	for (int i = 0; i < nombre.length(); i++) {
		char l = tolower(nombre[i]);
		if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
			vocales++;
	}
	return vocales;
}

std::string mayusculas(std::string nombre) {

	std::string mayusculas = nombre;
	for (int i = 0; i < nombre.length(); i++) {
		mayusculas[i] = toupper(mayusculas[i]);
	}

	return mayusculas;
}

int longitud(std::string nombre) {


	return nombre.length();
}
