#ifndef DECLARARVECTOROBJETOS_H
#define DECLARARVECTOROBJETOS_H
#include "estudiante.h"


class declararvectorobjetos
{
    public:
        declararvectorobjetos();
        virtual ~declararvectorobjetos();
        int Gettamano() { return tamano; }
        void Settamano(int N) {
        tamano = N;
        if (N > 0){
                vectorestudiante = new estudiante[N];
        }
        }
        estudiante Getvectorestudiante(int p){return vectorestudiante[p];}
        void SetVectorestudiante(int p,estudiante ve){vectorestudiante[p]=ve;}
        void limpiar(){
            if (tamano > 0){
                    tamano = 0;
            delete []vectorestudiante;
            }
        }

        void cambiar(int p1, int p2){
            double temp;
            temp = vectorestudiante[p1].Getnota();

            vectorestudiante[p1].Setnota(vectorestudiante[p2].Getnota());
            vectorestudiante[p2].Setnota(temp);
        }
        void ordenarBurbuja(){
            int i,j;
            for ( i = 0; i<=Gettamano()-1;i++){
                for ( j = 0; j<=(Gettamano()-i)-2;j++){
                    if (vectorestudiante[j].Getnota()>vectorestudiante[j+1].Getnota()){
                        cambiar(j,j+1);
                    }
                }
            }
        }

        float promedioGeneral(){
        int i;
        float prom ,acum=0;
        for ( i = 0; i<=Gettamano()-1;i++){
            acum=acum+vectorestudiante[i].notad();
        }
        prom=acum/Gettamano();
        return prom;
        }

        float promReprob(){
            int i,cont=0;
            float prom,acum=0;
            for (i=0;i<=Gettamano()-1;i++){
                if (vectorestudiante[i].notad()<3){
                    acum = acum + vectorestudiante[i].notad();
                    cont = cont+1;
                }

            }

            prom = acum/cont;
            return prom;
        }

        string mejorestudiante(){
            int i,pos=0;
            float mayor=vectorestudiante[0].notad();
            string nom;

            for (i=1;i<=Gettamano()-1;i++){
                if(vectorestudiante[i].notad()>mayor){
                    mayor = vectorestudiante[i].notad();
                    pos = i;

                }
            }

            nom = vectorestudiante[pos].Getnombre();
            return nom;

        }

        float Promediospain(){
            int i,cont=0;
            float prom ,acum=0;
            for ( i = 0; i<=Gettamano()-1;i++){
                if(vectorestudiante[i].getasignatura()=="esp"){
                    acum= acum + vectorestudiante[i].notad();
                    cont = cont +1;
                }
            }
            prom = acum/cont;
            return prom;


        }

    protected:
    private:
        int tamano;
        estudiante*vectorestudiante;
};

#endif // DECLARARVECTOROBJETOS_H
