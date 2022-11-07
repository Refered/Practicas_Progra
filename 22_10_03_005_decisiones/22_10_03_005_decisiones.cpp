// 22_10_03_005_decisiones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int main()
{
	bool acceso = false;
	int cont = 0;
	std::string nombre = "Julio";
	std::string n_ingresado = "";
	std::string contra = "HolaMundial";
	std::string contra_ingresada = "";
	
	std::cout << "Ingresa el nombre de usuario :\n";
	std::getline(std::cin, n_ingresado);
	if (nombre == n_ingresado) {
		std::cout << "Nombre correcto";
		cont += 1;
	}
	else {
		std::cout << "BOBO"; 
	}
	std::cout << "Ingresa tu contrasenia :\n";
	std::getline(std::cin, contra_ingresada);
	if (contra == contra_ingresada) {
		std::cout << "Contrasenia correcto";
		cont += 1;
	}
	if (cont < 2)
	{
		std::cout << "Datos ingresados incorrectos" << std::endl;
	}
	if (cont == 2)
	{
		acceso = true;
	}
	std::cout << "El estado del sistema es: " << acceso;
}

