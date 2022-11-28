// P018_Producto_de_dos_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int producto(int a, int b)
{
    if (a == 0 or b == 0)
        return 0;
    else
    {
        return a + producto(a, b - 1);
    }
}
int main()
{
    int num = 0;
    int mult = 0;
    std::cout << "Introduce el primer numero por el que quieres multiplicar\n";
    std::cin >> num;
    std::cout << "Introduce el otro numero por el que quieres multiplicar\n";
    std::cin >> mult;
    std::cout << producto(num, mult);
      
}

