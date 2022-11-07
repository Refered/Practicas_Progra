// 2022_10_31_008_Practica_matriz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
int main()

{
    int matriz[3][3];
    int randic = 0;
    srand(time(NULL));
    for (int i = 0; i < (sizeof(matriz) / (sizeof(matriz[0]))); i++)
    {
        
        for (int j = 0; j < (sizeof(matriz[0]) / (sizeof(matriz[0][0]))); j++)
        {

            randic = rand() % (11);
            matriz[i][j]={randic};

        }
    }
    for (int i = 0; i < (sizeof(matriz)/(sizeof(matriz[0]))); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / (sizeof(matriz[0][0]))); j++)
        {
        
            std::cout << matriz[i][j] << " ";

        }
        std::cout << "\n";
    }
    
}

