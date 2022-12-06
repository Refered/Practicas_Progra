// Narrada.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>

int main()
{
    int decision = 0;
    int camino = 0;
    bool llave = false;
    Sleep(700);
    std::cout << "Buenos dias!!!\n";
    Sleep(700);
    std::cout<<"Por fin despiertas (dice una voz resuena en todo el cuarto)\n";

    Sleep(1000);
    std::cout << "Que haras ahora?\nPuedes salir del cuarto(1) o explorar la habitacion(2)\n";
    std::cin >> decision;

    if (decision == 1) {
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes-\nQue camino tomaremos hoy?\n la izquierda(1) o la derecha(2)\n";
        std::cin >> camino;


    }
    Sleep(700);
    if (decision == 2) {
        std::cout << "-El cuarto parece inmaculado sin mas que la cama y un televisor antiguo sin ninguna conexion a la luz-\nSolo te queda salir de la habitacion\n";
        Sleep(700);
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes- Que camino tomaremos hoy? la izquierda(1) o la derecha(2)\n";
        std::cin >> camino;
    }
    Sleep(700);
    switch (camino) {
    case 1:
        std::cout << "-Caminas a la izquierda y llegas a unas oscuras escaleras que van hacia abajo, las cuales bajas-\n-Encuentras una puerta entras(1) o sigues bajando(2)\n";
        std::cin >> decision;
        Sleep(700);
        if (decision == 1) {
            std::cout << "-Parece que dentro solo hay una llave con un logo raro, tomas la llave y sales de la habitacion(1) o solo sales del cuarto?(2)- \n";
            std::cin >> decision;
            if (decision == 1) {
                llave = true;
            }
            Sleep(700);
            if (decision == 2 || decision == 1) {
                std::cout << "-Sigues bajando hasta llegar a otra puerta la cual tiene un seguro con un logo raro intentaras abrirlo?(1) o sigues bajando?(2)-\n";
                std::cin >> decision; Sleep(700);
                if (decision == 1 && llave == true) {
                    std::cout << "-Parece que la llave te permitio abrir la puerta...-\n"; Sleep(1200);
                    std::cout << " - Sales del edificio y te encuentras libre, volteas atras y ves la casa abandonada de un solo piso en la que estabas sin saber como ni por que llegaste ahi - \n"; Sleep(1200);
                    std::cout << "La voz que resuena dice-Wow escapaste, espero disfrutes lo que te depara la vida fuera, si es que acaso lograste salir\n"; Sleep(1200);
                    std::cout << "FIN";
;               exit(0);
                }
                if (decision == 1 && llave == false) {
                    std::cout << "-Parece que la puerta esta cerrada y solo puedes seguir bajando\n"; Sleep(1200);
                    decision = 2;

                }
                Sleep(1200);
                if (decision == 2) {
                    std::cout << "-Sigues bajando hasta que ves otra puerta, esta vez esta media abierta, decides entrar(1) o seguir bajando(2)\n"; Sleep(1000);
                    std::cin >> decision;
                    if (decision == 1) {
                        std::cout << "Ves un boton negro lo puedes presionar(1) o seguir bajando(2)\n"; Sleep(1000);
                        std::cin >> decision;
                        if (decision == 1) {
                            std::cout << "-Escuchas como retumba la habitacion-\n"; Sleep(1000);
                            std::cout << "-Se abre una escotilla debajo de ti y empiezas a caer-\n"; Sleep(1000);
                            std::cout << "-Pierdes la conciencia-\n"; Sleep(1000);
                            std::cout << "Buenos dias!!!\n";
                            Sleep(700);
                            std::cout << "Por fin despiertas (dice una voz resuena en todo el cuarto)\n"; Sleep(700);
                            std::cout << "FIN"; Sleep(1000);
                            exit(0);
                        }

                    }
                    if (decision == 2) {
                        std::cout << "-Sigues bajando y encuentras por fin el final de las escaleras y hay dos puertas, una con seguro(1) y otra sin seguro(2)-\n"; Sleep(1000);
                        std::cin >> decision;
                        if (decision == 2 || llave==false) {
                            std::cout << "Al parecer toca abrir la puerta sin seguro-Dijo la voz de las paredes-\n"; Sleep(1000);
                            std::cout << "-Abres la puerta y entras a la habitacion-\n"; Sleep(1000);
                            std::cout << "-Ves una sala de control con una persona sentada frente a varios monitores-\n"; Sleep(1000);
                            std::cout << "-Se voltea el hombre-\n"; Sleep(1000);
                            std::cout << "Veo que me encontraste, deberia premiarte por esto\n"; Sleep(1000);
                            std::cout<<"- Saca un arma y boom!- \n"; Sleep(1000);
                            std::cout << "FIN"; Sleep(1000);
                            exit(0);
                        }
                        if (decision == 1 && llave == true) {

                            std::cout << "-Parece que  la puerta da hacia un pasillo con una luz al fondo-\n"; Sleep(1000);
                            std::cout<<"-Caminas hacia la luz y sales al exterior a un vasto campo de flores en el cual por fin eres libre-\n"; Sleep(1000);
                            std::cout << "FIN";
                            exit(0);
                        }

                    }
                }

            }
        }
        break;

    case 2:
        Sleep(700);
        std::cout << "-Caminas a la derecha y llegas a unas escaleras que van hacia arriba-\n-Encuentras una puerta entras(1) o sigues subiendo(2)\n"; Sleep(700);
        std::cin >> decision;
        if (decision == 1) {
            std::cout << "-Parece que dentro hay dos botones blancos, decidiras presionar el primero(1), el segundo(2) o simplemente salir para seguir subiendo?(3)- \n"; Sleep(700);
            std::cin >> decision;
            if (decision == 1) {
                std::cout << "-Se abrio una puerta secreta en la pared del fondo, iras(1) o seguiras subiendo las escaleras(2)-\n"; Sleep(1000);
                std::cin >> decision;
                if (decision == 1) {

                    std::cout << "-Caminas por la puerta y hay una salida al exterior-\nSigues caminando y sales hacia una calle donde todo parece estar desolado, parece que la ciudad lleva mucho tiempo muerta\n"; Sleep(1000);
                    std::cout << "FIN";
                    exit(0);
                }
                if (decision == 2) {
                    decision += 1;

                }
            }
            if (decision == 2) {

                std::cout << "-Al presionar el boton resuena el edificio pero no pasa mas, por lo que decides seguir subiendo-\n"; Sleep(1000);
                llave = true;
                decision += 1;

            }
            if (decision == 3) {

                if (llave == true) {
                
                    std::cout << "-Parece haber una escotilla con unas escaleras de mano, la curiosidad te gana y subes las escaleras llegando a un tejado, ves el hermoso cielo y te recuestas en el piso, simplemente sintiendote libre-\n"; Sleep(1000);
                    std::cout << "FIN";
                    exit(0);
               }
                std::cout << "-Parece que solo queda una puerta, no te queda mas remedio que entrar-\n"; Sleep(1000);
                std::cout << "-Entras y de repente caes al vacio-\n"; Sleep(1400);
                std::cout << "Buenos dias!!!\n";
                Sleep(700);
                std::cout << "Por fin despiertas (dice una voz resuena en todo el cuarto)\n";
                exit(0);

            }

        }
        break;

    default:
        break;
    }

}
