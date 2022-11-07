// 22_10_12_006_Pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<Windows.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    std::string pokemon1 = "Torchic", pokemon2 = "Treecko", pokemon3 = "Mudkip", usuario = "", bot = "";
    int elecc = 0, eleccene = 0;
    int vidap = 10, vidae = 10, danio = 3;
    bool vivos = true;

    std::cout << "Escribe el numero del pokemon que deseas \n1)Torchic\n2)Treecko\n3)Mudkip\n";
    std::cin >> elecc;
    switch (elecc) {

    case 1:
        usuario = pokemon1;
        bot = pokemon3;
        break;

    case 2:
        usuario = pokemon2;
        bot = pokemon1;
        break;
    case 3:
        usuario = pokemon3;
        bot = pokemon2;
        break;

    default:
        break;
    }

    while (vivos) {

        Sleep(777);
        std::cout << "Tu " << usuario << " tiene " << vidap << " de vida \nEl " << bot << " enemigo tiene " << vidae << " de vida\n";
        std::cout << "Quieres atacar(1) o curarte(2)\n";
        std::cin >> elecc;
        switch (elecc) {
        case 1:
            vidae -= danio;
            std::cout << "Le habeis quitado " << danio << " al enemigo\n";
            Sleep(600);

            break;
        case 2:
            vidap += 4;
            std::cout << "Te habeis curado 4 de vida\n";
            Sleep(600);

            break;
        }
        eleccene = 1 + rand() % (2);
        switch (eleccene) {
        case 1:
            vidap -= 5;
            std::cout << "Te hizo 5 de da;o\n";
            Sleep(600);
            break;
        case 2:
            vidae += 2;
            std::cout << "El enemigo se ha curado 2 de vida\n";
            Sleep(600);

            break;
        }
        if (vidae <= 0) {
            vivos = false;
            std::cout << "Felicidades habeis ganadoo!!";

        }
        if (vidap <= 0) {
            vivos = false;
            std::cout << "Ohh no murio tu pokemon!!";
        }
    }

}

