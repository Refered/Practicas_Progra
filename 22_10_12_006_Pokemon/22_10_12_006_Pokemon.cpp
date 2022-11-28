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
    float probabilidad = static_cast<float>(1) / 2;
    int danicrit = 0;
    std::cout << "El enemigo siempre tendra un " << probabilidad * 100 << "% de atacar y un " << probabilidad * 100 << "% de curarse\n";
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
            danicrit = 1 + rand() % (3);
            std::cout << "Tienes un 33% de darle un golpe critico\n";
            Sleep(700);
            if (danicrit == 1) {
                vidae -= 5;

                std::cout << "Asestasteis un golpe critico!!!\n";
                std::cout << "Le habeis quitado 5 de da;o al enemigo\n";
                Sleep(700);
            }
            else {
                vidae -= 3;
                std::cout << "Le habeis quitado 3 de da;o al enemigo\n";
                Sleep(700);
            }
        
            Sleep(600);

            break;
        case 2:
            vidap += 4;
            std::cout << "Te habeis curado 4 de vida\n";
            Sleep(600);

            break;
        }
        eleccene = 1 + rand() % (2);
        
        
        Sleep(777);
        switch (eleccene) {
        case 1:
            danicrit = 1 + rand() % (3);
            std::cout << "Tiene un 33% de darte un golpe critico\n";
            Sleep(600);
            if (danicrit == 1) {
                vidap -= 5;

                std::cout << "Te asesto un golpe critico!!!\n";
                std::cout << "Te hizo 5 de da;o\n";
                Sleep(700);
            }
            else {
                vidap -= 3;
                std::cout << "Te hizo 3 de da;o\n";
            }
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

