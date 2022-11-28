// P015_Máximo_Común_Divisor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int maximocomund(int num1, int num2)
{

    if (num2 == 0) {
        return num1; 
    }
    return maximocomund(num2, num1 % num2);

}
int main()
{
    int n1 = 0;
    int n2 = 0;
    std::cout << "Hello World!\n";
    std::cin >> n1;
    std::cin >> n2;
    std::cout<< maximocomund(n1, n2);
}