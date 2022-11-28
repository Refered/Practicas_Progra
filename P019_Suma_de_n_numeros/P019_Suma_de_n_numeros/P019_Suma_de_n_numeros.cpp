// P019_Suma_de_n_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


int suma(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + suma(n - 1);
}

int main()
{
    int num = 0;
    std::cout << "Pon el numerito\n";
    std::cin >> num;
    std::cout <<"La suma de los numeros todos anteriores es " << suma(num);

}

