// Historia_Narrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int decision = 0;
    int camino = 0;
    bool llave = false;
    std::cout << "Buenos dias\n"<<"Por fin despiertas (dice una voz resuena en todo el cuarto) \n";
    std::cout << "Que haras ahora?\n Puedes salir del cuarto(1) o explorar la habitacion(2) \n";
    std::cin >> decision;
    
    if (decision == 1) {
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes- Que camino tomaremos hoy? la izquierda(1) o la derecha(2)\n ";
        std::cin >> camino;


    }
    if (decision == 2) {
        std::cout << "-El cuarto parece inmaculado sin mas que la cama y un televisor antiguo sin ninguna conexion a la luz-\nSolo te queda salir de la habitacion\n";
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes- Que camino tomaremos hoy? la izquierda(1) o la derecha(2)\n ";
        std::cin >> camino;
    }
   
    switch(camino)
    {
    case 1:
        std::cout << "-Caminas a la izquierda y llegas a unas oscuras escaleras que van hacia abajo, las cuales bajas-\n-Encuentras una puerta entras(1) o sigues bajando(2)\n";
        std::cin >> decision;
        if (decision == 1) {
            std::cout << "-Parece que dentro solo hay una llave con un logo raro, tomas la llave y sales de la habitacion(1) o solo sales del cuarto?(2)- \n";
            std::cin >> decision;
            if (decision == 1) {
                llave = true;
            }
            if(decision==2 || decision==1){
                std::cout << "-Sigues bajando hasta llegar a otra puerta la cual tiene un seguro con un logo raro intentaras abrirlo(1) o sigues bajando?(2)-\n";
                

        }

        break;

    case 2:
        std::cout << "-Caminas a la derecha y llegas a unas escaleras que van hacia arriba-\n-Encuentras una puerta entras(1) o sigues bajando(2)\n";
        std::cin >> decision;
        if (decision == 1) {
            std::cout << "-Parece que dentro hay dos botones blancos, decidiras presionar el primero(1), el segundo(2) o simplemente salir para seguir subiendo?(3)- \n";
            std::cin >> decision;

        }
        break;

    default:

}

