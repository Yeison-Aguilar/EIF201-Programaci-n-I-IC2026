#include <iostream>
using namespace std;
#include "EstadisticasArreglo.h"

int main()
{
    int vector[10];
	
	std::cout << "Ingrese los numeros"<<endl;


	for (int i = 0; i < 10; i++) {
		

		cout <<"numero "<< i + 1<<": ";
		cin >> vector[i];
	}

	

	int opcion;
	do {
		
		
		cout << "1.Calcular mayor"<<endl;
		cout << "2.Calcular menor"<<endl;
		cout << "3.Suma"<<endl;
		cout << "4.Promedio"<<endl;
		cout << "5.Salir"<<endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			CalcularMayor(vector, 10);
			break;
		case 2:
			CalcularMenor(vector, 10);
			break;
		case 3:
			Suma(vector, 10);
			break;
		case 4:
			Promedio(vector, 10);
			break;
			
		
		}
			



	} while (opcion != 5);
}

