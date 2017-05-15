#include <iostream>
#include "producto.h"

using namespace std;
// Producto de dos matrices 3 x 3 programa incluye: Lea matrices, haga producto y que escribar resultado
int main()
{
    producto * Obj=new producto();
    Obj->leermatriz1();
    Obj->leermatriz2();
    Obj->multiplicacion();
    Obj->mostrar();
    return 0;
}
