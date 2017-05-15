#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
using namespace std;

class estudiante
{
    public:
        estudiante();
        estudiante(int cod,string nom,double n,double n2,double n3,string as){
            codigo = cod;
            nombre = nom;
            nota = n;
            nota2 = n2;
            nota3 = n3;
            asignatura =as;
        }
        virtual ~estudiante();
        int Getcodigo() { return codigo; }
        void Setcodigo(int cod) { codigo = cod; }
        string Getnombre() { return nombre; }
        void Setnombre(string nom) { nombre = nom; }
        double Getnota() { return nota; }
        void Setnota(double n) { nota = n; }
        double Getnota2() { return nota2; }
        void Setnota2(double n2) { nota2 = n2; }
        double Getnota3() { return nota3; }
        void Setnota3(double n3) { nota3 = n3; }
        void SetAsignatura(string asg){asignatura = asg;}
        string getasignatura(){return asignatura;}
        float notad(){
            float def=0;
            def=(Getnota()+Getnota2()+Getnota3())/3;
            return def;
        }
    protected:
    private:
        int codigo;
        string nombre;
        double nota;
        double nota2;
        double nota3;
        string asignatura;

};

#endif // ESTUDIANTE_H
