#include "matriz.h"

matriz::matriz(){
        //ctor
        // al crear la matriz nesesariamente nesecitamos antes definir el numero de filas y columnas par que se realize bien el proceso
       //inicializando las variables
        cout<<"Digite el numero de filas "<<endl;
        cin>>filas;//el numero de filas
        cout<<"Digite el numero de columnas "<<endl;
        cin>>columnas;//numero de columnas
        //proceso para crear una matriz dinamica
        apu=new int*[filas];//aqui definimos el primer apuntador como que tendra las filas
        for(int j=0;j<filas;j++){//ahora hacemos que el doble aputnador se asocie con las culumnas
            apu[j]=new int [columnas];//aqui difinimos el segundo apuntador , las filas de la matriz
        }
}


matriz::~matriz(){
        //dtor
        //al igual que el constructor en el quefinimos el primer apuntador para que se defina con las columnas aqui ahcemos lo mismo
    delete apu;//una ves destruidor el  numero de columnas se destruye el vector que a quedado ( el primer apuntador)
}
