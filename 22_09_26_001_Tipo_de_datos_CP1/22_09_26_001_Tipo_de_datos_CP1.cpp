// 22_09_26_001_Tipo_de_datos_CP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<String>
#include <iostream>

int main()
{
	//Reglas o sintaxys de declaras variables
	//1. tipo de dato 2.Nombre 3.Inicializacion
	bool Comprobacion;
	//Sintaxys para hablar con el usuario
	//1. palabra reservada 2. concatenar 3. entre comillas escribir lo que quieras decir 4. concatenar 5. salto de linea 6. fin del comando
	std::cout << "Hola usuario"<<std::endl;
	//sintaxys para solicitar valores 
	//1. palabra reservada 2.concatenar 3.variable donde se guarda
	std::cout << "Hola ingresa 0 para false o 1 para true\n";
	std::cin >> Comprobacion;
	//Mismo proceso que hablar con usuario, cambia que se escribe el nombre de la variable para que la imprima
	int edad;
	std::string nombre;
	std::string apellido;
	float altura;
	char sexo;
	double num_cel;
	std::cout << "Introduce tu edad\n";
	std::cin >> edad;
	std::cout << "Introduce tu nombre\n";
	std::cin >> nombre;
	std::cout << "Introduce tu apellido\n";
	std::cin >> apellido;
	std::cout << "Introduce tu altura en metros\n";
	std::cin >> altura;
	std::cout << "Introduce tu sexo con M de masculino o F para femenino o N para ninguno de los anteriores\n";
	std::cin >> sexo;
	std::cout << "Introduce tu numero de telefono\n";
	std::cin >> num_cel;
	std::cout << "El valor de comprobacion es: " << Comprobacion << std::endl;
	std::cout << "Hola " << nombre << " de " << edad << " a;os de edad, definido por el sexo " << sexo <<" que mide " <<altura<<" te llamaremos al " << num_cel;
}
