#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class producto
{
    public:
        producto(){}
        virtual ~producto(){}

        void leermatriz1(){
        cout<<"MATRIZ 1 "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Introduzca el elemento "<<i+1<<" , "<<j+1<<" : ";
                cin>>m1[i][j];
                }
            }
        }

             void leermatriz2(){
             cout<<"MATRIZ 2 "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Introduzca el elemento "<<i+1<<" , "<<j+1<<" : ";
                cin>>m2[i][j];
                }
            }
        }

            void multiplicacion(){
            int i,j,l;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                p[i][j]=0;
                    for(l=0;l<3;l++){
                        p[i][j]=p[i][j]+(m1[i][l]*m2[l][j]);
                        }
                    }
            }
     }

            void mostrar(){
            cout<<endl;
            cout<<"MATRIZ 1: ";
            for(int i=0;i<3;i++){
            cout<<endl;
                    for(int j=0;j<3;j++){
                        cout<<m1[i][j]<<" ";
                        }
                }
        cout<<endl;
        cout<<endl;
        cout<<"MATRIZ 2: ";
        for(int i=0;i<3;i++){
            cout<<endl;
                    for(int j=0;j<3;j++){
                        cout<<m2[i][j]<<" ";
                        }
                }
                cout<<endl;
        cout<<endl;
        cout<<"Producto de matriz AxB: ";
            for(int i=0;i<3;i++){
            cout<<endl;
                    for(int j=0;j<3;j++){
                        cout<<p[i][j]<<" ";
                        }
                }
        cout<<endl;
                }

    protected:
    private:
        int m1[3][3];
        int m2[3][3];
        int p[3][3];
};

#endif // PRODUCTO_H
