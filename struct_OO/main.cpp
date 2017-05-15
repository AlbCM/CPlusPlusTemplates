#include <iostream>
#include "registro.h"
#include <cstdlib>
using namespace std;

int main()
{

    registro* Obj = new registro;
    struct Datos p[3];
    Obj->llenar(p);
    system("clear");
    Obj->mostrar(p);
    return 0;
}
