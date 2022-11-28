// P017_Potencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>



int potenciarecursiva(int a, int b) {
    
    if (b == 0)
        return 1; 
    else 
        return a* potenciarecursiva(a, b - 1);
    
}

int main()
{
    int numero = 0;
    int potencia = 0;

    std::cout << "Pon tu numero\n";
    std::cin >> numero;
    std::cout << "Pon la potencia \n";
    std::cin >> potencia;
    std::cout << potenciarecursiva(numero, potencia);
}
