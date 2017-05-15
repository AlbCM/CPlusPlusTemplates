#include <iostream>
#include <matriz.h>
#include <windows.h>

using namespace std;

int main()
{

    matriz*  objeto = new matriz();
    objeto->matriz_leer();
    objeto->matriz_mostrar();
    getch();


    return 0;
}
