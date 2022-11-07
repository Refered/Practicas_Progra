// 2022_10_11_005_Calculadora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

int main()
{
	//declarando las variables que se usaran
	int num1;
	int num2;
	char simbolo;

	//asignando valores a los numeros y del simbolo aritmetico para sabe que operacion hara
	std::cout << "Cual quieres que sea tu primer numero ?\n";
	std::cin >> num1;
	std::cout << "Cual quieres que sea tu segundo numero ?\n";
	std::cin >> num2;
	std::cout << "Ahora que quieres que se haga? para suma escribe +, para resta -, para multiplicacion * ,  para division /, para potencia escribe p, para raiz r \n";
	std::cin >> simbolo;
	//Hice un switch que sirve para seleccionar mas facilmente las ecuaciones 
	switch (simbolo)
	{
	case '+':
		std::cout << "La suma de sus valores es = " << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << "La resta de sus valores es = " << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << "El producto de sus valores es = " << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << "La division de sus valores es = " << num1 / num2 << std::endl;
		break;
	case 'p':
		std::cout << "La potencia del primer numero es = " << num1 * num1 << " y la potencia del segundo es = " << num2 * num2 << std::endl;
		break;
	case 'r':
		std::cout << "La raiz del primer numero es = " << sqrt(num1) << " y la raiz del segundo es = " << sqrt(num2) << std::endl;
		break;
	default:
		break;
	}


}
