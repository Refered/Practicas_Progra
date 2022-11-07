// 2022_11_07_009_Listas_Enlazadas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

class nodo
{
public:
    int edad;
    std::string nombre;
    nodo* next;
};
struct Libro
{
    std::string nombre;
    std::string autor;
    int fecha;
}Guardados[10];
enum ataquepokemon
{
    tackleada,
    quecomatierra,
    sakakk,
    mtkaka,
    milaniosdedolor = 1000
};
int main()
{
    Libro Guardados[10];
    Guardados[0].nombre = "Batallas en el desierto";
    Guardados[0].autor = "José Emilio Pacheco";
    Guardados[0].fecha = 1981;

    std::cout << Guardados[0].nombre << std::endl;
    std::cout << Guardados[0].autor << std::endl;
    std::cout << Guardados[0].fecha << std::endl;

    ataquepokemon pikashu = tackleada;
    std::cout << pikashu << std::endl;

    pikashu = sakakk;
    std::cout << pikashu << std::endl;


    nodo* Iker = NULL;
    nodo* Tadeo = NULL;
    nodo* Jose = NULL;

    Iker = new nodo();
    Tadeo = new nodo();
    Jose = new nodo();

    Iker->edad = 18;
    Iker->nombre = "Iker";
    Iker->next = Tadeo;

    Tadeo->edad = 15;
    Tadeo->nombre = "Tadeo";
    Tadeo->next = Jose;

    Jose->edad = 12;
    Jose->nombre = "Jose";
    Jose->next = NULL;

    while (Iker != NULL)
    {
        std::cout << Iker->edad << std::endl;
        Iker = Iker->next;
    }
}