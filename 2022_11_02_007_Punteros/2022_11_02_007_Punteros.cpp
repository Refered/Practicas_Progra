// 2022_11_02_007_Punteros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 2022_11_02_007_Punteros.cpp : \// Este archivo contiene la practica de punteros

#include <iostream> //Controla entradas y salidas
#include <locale> //Nos ayuda a interpretar idiomas
#include <stdlib.h> //Nos protege de bucles infinitos
#include <cstdlib> //Libreria de C para entradas y salidas o control del sistema
#include <Windows.h> //Funciones de control de programa mediante pausas y dormidas



int main()
{
    //Declaración de un puntero.
    int edad = 0;
    int* apuntador = &edad;
    std::cout << "Valor de la variable edad: " << edad << std::endl;
    *apuntador = 20;
    std::cout << "Valor de la variable edad: " << edad << std::endl;
    std::cout << "Dirección de memoria del puntero: " << apuntador << std::endl;
    std::cout << "Valor del apuntador: " << *apuntador << std::endl;
    std::cout << "Dirección de memoria de la edad: " << &edad << std::endl;

    system("pause");
    apuntador = NULL;

}