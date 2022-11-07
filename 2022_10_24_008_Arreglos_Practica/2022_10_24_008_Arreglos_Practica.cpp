// 2022_10_24_008_Arreglos_Practica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<Windows.h>
int main()
{

    int year[3];
    std::string title[3];
    std::string author[3];

    std::cout << "Book shelf\n";
    for (int i = 0; i < 3; i++)
    {

        std::cout << "Enter the title of the book\n";
        std::getline(std::cin, title[i]);
        std::cout << "Enter the author of the book\n";
        std::getline(std::cin,author[i]);
        std::cout << "Enter the year of the book\n";
        std::cin >> year[i];
        std::cin.ignore();

 
    }
    for (int j = 0; j < 3; j++)
    {

        std::cout << title[j] << " from " << author[j] << " published in " << year[j]<<std::endl;

    }
}
