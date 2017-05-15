#include <iostream>
#include <conio.h>
#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class matriz
{
    protected:
    private:
        int **apu;//Defino un doble apuntador ya que el primero llevara filas y el segundo columnas
        int filas,columnas;//variables necesairas
    public:
        matriz();
        virtual ~matriz();

    void  matriz_leer(){
        //se ingresa los datos de la matriz
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                cout<<"Digite el dato "<<"["<<i+1<<"]["<<j+1<<"]"<<endl;
                //como en c++ se tiene en cuenta desde la posicion cero entonces agregamos un mas a cada vector para que deverdad se vea el vector
                cin>>apu[i][j];
            }
            cout<<endl;
        }
    }

    void matriz_mostrar(){
        // se muestran los datos de la matriz
        cout<<"Los datos de la matriz son"<<endl;
        for( int i=0;i<filas;i++){
            for( int j=0;j<columnas;j++){
                cout<<apu[i][j]<<" ";
            }
            cout<<endl;//este cout es para se imprima en forma de matriz
        }

    }



};

#endif // MATRIZ_H
