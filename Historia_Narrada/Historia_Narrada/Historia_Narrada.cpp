// Historia_Narrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int decision1 = 0;
    int decision2 = 0;
    std::cout << "Buenos dias\n"<<"Por fin despiertas (dice una voz que suena por todo el cuarto) \n";
    std::cout << "Que haras ahora?\n Puedes salir del cuarto(1) o explorar la habitacion(2) \n";
    std::cin >> decision1;
    
    if (decision1 == 1) {
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes- Que camino tomaremos hoy? la izquierda(1) o la derecha(2)\n ";
        std::cin >> decision1;


    }
    if (decision1 == 2) {
        std::cout << "-El cuarto parece inmaculado sin mas que la cama y un televisor antiguo sin ninguna conexion a la luz-\nSolo te queda salir de la habitacion\n";
        std::cout << "-Sales del cuarto y ves dos caminos la izquierda que parece un pasillo mas oscuro y derecha el cual es un pasillo luminoso con blancas paredes- Que camino tomaremos hoy? la izquierda(1) o la derecha(2)\n ";
        std::cin >> decision1;
    }
   
    switch(decision1)
    {
    case 1:
        std::cout << "-Caminas a la izquierda y llegas a una puerta negra ";
        break;

    }

}

