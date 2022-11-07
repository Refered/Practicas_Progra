// 2022_10_10_003_Decisiones_multiples_cp3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<windows.h>
int main()
{
    bool seguir = true;
    int contador = 0;
    int opc = 0;
    int n1 = 0, n2 = 0;
    float ndecimal = 0, ndecimal2 = 0,result=0;
   // std::cout << "Introduce la opcion que quieras\n 1)SUMA\n 2)RESTA\n 3)MULTIPLICACION\n 4)DIVISION\n";
  //  std::cin >> opc;
  // 
    //sintaxys del switch case
    //switch (opc)
   // {
    //case 1:
        //codigo caso 0
     //   break;
   // case 2:
        //codigo caso 1
    //    break;
   // default:
    //    std::cout << "ay mi chavo\n";
   // }
    while (seguir) {
        Sleep(740);
        std::cout << "#" << contador << std::endl;
        contador += 1;
        if (contador > 100)
        {
            seguir = false;
        }
        
    }

}
