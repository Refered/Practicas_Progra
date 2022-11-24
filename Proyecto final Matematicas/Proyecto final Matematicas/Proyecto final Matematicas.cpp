// Proyecto final Matematicas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


void binario(int n) {

    if (n != 0) {
        binario(n / 2);
        std::cout << n % 2;
    }
}
int main()
{
    int num = 0;
	int num1 = 0;
	int num2 = 0;
	char simbolo;
	//asignando valores a los numeros y del simbolo aritmetico para sabe que operacion hara
	std::cout << "Cual quieres que sea tu primer numero ?\n";
	std::cin >> num1;
	std::cout << "En binario " << num1 << " es "; binario(num1);
	std::cout << "\nCual quieres que sea tu segundo numero ?\n";
	std::cin >> num2;
	std::cout << "\nEn binario " << num2 << " es "; binario(num2);
	std::cout << "\nAhora que quieres que se haga? \nsuma +\nresta -\nmultiplicacion *\ndivision /\npotencia escribe p\nraiz r \n";
	std::cin >> simbolo;
	//Hice un switch que sirve para seleccionar mas facilmente las ecuaciones 
	switch (simbolo)
	{
	case '+':
		num = num1 + num2;
		
		std::cout << "La suma de sus valores es = " << num<< " en binario es ";
	    binario(num);
		break;
	case '-':
		num = num1 - num2;
		std::cout << "La resta de sus valores es = " << num << std::endl;
		binario(num);
		break;
	case '*':
		num = num1 * num2;
		std::cout << "El producto de sus valores es = " << num << std::endl;
		binario(num);
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

