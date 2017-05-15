
#ifndef REGISTRO_H

#define REGISTRO_H
#include <iostream>
#include <cstdlib>

using namespace std;

// Arreglos de objetos, en el siguiente programa lo que haremos sera almacenar el nombre, apellido y cedula de una persona
// haciendo uso de un arreglo y una estructura.
struct Datos{
  string nombre;
  short edad;
};

class registro
{
    private:

    public:

    registro(){}
    virtual ~registro(){}

    void llenar(struct Datos p[]){
    for (int i=0;i<3;i++){
        cout<<"Ingrese su nombre: ";
        cin>>p[i].nombre;
        cout<<"Ingrese su edad: ";
        cin>>p[i].edad;
        cout<<"_______________________________"<<endl;
        }
    }

    void mostrar(struct Datos p[]){
        for (int i=0; i<3;i++){
        cout<<"Nombre: ";
        cout<<p[i].nombre<<endl;
        cout<<"Edad: ";
        cout<<p[i].edad<<endl;
        cout<<"_____________________________"<<endl;
        }
    }


};

#endif // REGISTRO_H
