#include <cstdlib>
#include <iostream>
#include "taylor.h"

using namespace std;

int main()
{


    taylor * Obj = new taylor();
    Obj->pedirdatos();
    cout<<Obj->seno();
    return 0;

}
