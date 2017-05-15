
#include <iostream>
#include <stdlib.h>
#include "estudiante.h"
#include "declararvectorobjetos.h"
using namespace std;
void menu(){
    cout <<"\n\n\t\t\t\t Menu";
    cout <<"\n--------------------------------------------------------------------------------\n";
    cout <<"\n\t1) Insertar datos del estudiante. "<<endl;
    cout <<"\n\t2) Salir. ";
    cout <<"\n";
}
int menu2(){
    cout <<"\n---------------------------------------------------------------------\n"<<endl;
    cout <<"\n\t\t\t\t Menu\n";
    cout <<"\n---------------------------------------------------------------------\n";
    cout <<"\t1) Mostrar datos del estudiante. "<<endl;
    cout <<"\t2) Buscar estudiante por codigo. "<<endl;
    cout <<"\t3) estudiantes aprobados y reprobados."<<endl;
    cout <<"\t4) ordenar nota 1."<<endl;
    cout <<"\t5) Promedio General"<<endl;
    cout <<"\t6) Promedio de Reprobacion"<< endl;
    cout <<"\t7) Nombre mejor Estudiante"<< endl;
    cout <<"\t8) Promedio Espanol"<< endl;
    cout <<"\t9) Salir"<< endl;
    cout <<"\n---------------------------------------------------------------------\n";
}
void PedirDatos(estudiante *est);
int main(){
    declararvectorobjetos* obj=new declararvectorobjetos();
    estudiante est;
    system ("color 1F");
    int tam,opc,x,op,i;
    do{
        system("cls");
        menu();
        cout <<"\n Seleccione un opccion: ";
        cin>>opc;
        switch(opc){
            case 1 : system("cls");
            cout << "------------------------------------------------------------------------------- \n \n";
            cout << "\nDigite el numero de estudiante (s): ";
            cin >> tam;
            obj->Settamano(tam);
            system("cls");
            cout << "------------------------------------------------------------------------------- \n";
            cout << "\n\t\tDIGITE LA INFORMACION  DEL ESTUDIANTE (S) \n";
            cout << "------------------------------------------------------------------------------- \n \n";
            for(int i=0; i<=obj->Gettamano()-1; i++){
                    cout << "------> Informacion del Estudiante " << i+1 << "\n";
                    PedirDatos(&est);
                    obj->SetVectorestudiante(i, est);
                    cout << "\n";
                    }
                    system("cls");
                    do{system ("cls");
                          menu2();
                          cout <<"\n Seleccione un opccion: ";
                          cin>>op;
                          switch(op){
                          case 1: system ("cls");
                          cout << "\n";
                          cout << "------------------------------------------------------------------------------- \n";
                          cout << "\n\t\t DATOS DEL ESTUDIANTE (S) \n";
                          cout << "------------------------------------------------------------------------------- \n \n";
                          for (int i=0; i<=obj->Gettamano()-1; i++){
                                cout << "\n Codigo: " << obj->Getvectorestudiante(i).Getcodigo();
                                cout << "\n Nombre: " << obj->Getvectorestudiante(i).Getnombre();
                                cout << "\n Nota del primer corte: " << obj->Getvectorestudiante(i).Getnota();
                                cout << "\n Nota del segundo corte: "<<obj->Getvectorestudiante(i).Getnota2();
                                cout << "\n Nota del tercer corte: "<<obj->Getvectorestudiante(i).Getnota3();
                                cout << "\n Nota definitiva :"<<obj->Getvectorestudiante(i).notad();
                                if (obj->Getvectorestudiante(i).notad()>=3){
                                    cout <<"\nEstado del estudiante: Aprobodo.";
                                }else{cout <<"\nEstado del estudiante: Reprobado.";}
                                    cout <<"\n";
                        }
                        cout << "\n";
                        system("pause");
                        break;
                        case 2: system("cls");
                        cout <<"\n\n\t\t\tBuscar por codigo";
                        cout <<"\nDigite el codigo del estudiante a buscar: ";
                        cin>>x;
                        while((x!=obj->Getvectorestudiante(i).Getcodigo()) && (i<=obj->Gettamano()-1)) {
                            i++;
                        }
                        if (i==obj->Gettamano()){
                            cout<<"\nEstudiante  no encontrado.\n"<<endl;
                        }else {
                                cout << "\n Nombre: " << obj->Getvectorestudiante(i).Getnombre();
                                cout << "\n Nota del primer corte: " << obj->Getvectorestudiante(i).Getnota();
                                cout << "\n Nota del segundo corte: "<<obj->Getvectorestudiante(i).Getnota2();
                                cout << "\n Nota del tercer corte: "<<obj->Getvectorestudiante(i).Getnota3();
                                cout << "\n Nota definitiva :"<<obj->Getvectorestudiante(i).notad();
                                cout <<"\n";
                        }
                        system("pause");
                        break;
                        case 3: system("cls");
                                for (int i=0; i<=obj->Gettamano()-1; i++){
                                if (obj->Getvectorestudiante(i).notad()>=3){
                                        cout <<"\n\tESTUDIANTES APROBADOS.\n";
                                cout << "\n Nombre: " << obj->Getvectorestudiante(i).Getnombre();
                                cout << "\n Nota del primer corte: " << obj->Getvectorestudiante(i).Getnota();
                                cout << "\n Nota del segundo corte: "<<obj->Getvectorestudiante(i).Getnota2();
                                cout << "\n Nota del tercer corte: "<<obj->Getvectorestudiante(i).Getnota3();
                                cout << "\n Nota definitiva :"<<obj->Getvectorestudiante(i).notad();
                                cout <<"\n";
                                system("pause");
                                }if(obj->Getvectorestudiante(i).notad()<3){
                                    cout <<"\n\t ESTUDIANTS REPROBADOS.\n";
                                cout << "\n Nombre: " << obj->Getvectorestudiante(i).Getnombre();
                                cout << "\n Nota del primer corte: " << obj->Getvectorestudiante(i).Getnota();
                                cout << "\n Nota del segundo corte: "<<obj->Getvectorestudiante(i).Getnota2();
                                cout << "\n Nota del tercer corte: "<<obj->Getvectorestudiante(i).Getnota3();
                                cout << "\n Nota definitiva :"<<obj->Getvectorestudiante(i).notad();
                                cout <<"\n";
                                system("pause");
                                }
                                cout <<"\n";

                            }
                        break;
                        case 4: obj->ordenarBurbuja();

                        for (int i=0; i<=obj->Gettamano()-1; i++){
                                cout << "\n Nota del primer corte: " << obj->Getvectorestudiante(i).Getnota();
                        }
                        system("pause");
                        break;

                        case 5: cout << "Promedio General: " << obj->promedioGeneral()<< endl;
                        system("pause");
                        break;

                        case 6: cout << "Promedio de Reprobacion" << obj->promReprob() << endl;
                        system("pause");
                        break;

                        case 7: cout << "El estudiante con mejor promedio es " << obj->mejorestudiante() << endl;
                        system("pause");
                        break;

                        case 8: cout << "El promedio de la asignatura de Espanol es " << obj->Promediospain() << endl;
                        system("pause");
                        break;
                        }

    }while (op!=9);
     break;
            case 2: return 0;
            break;

        }
    }while(opc!=2);
    return 0;
    }

    void PedirDatos(estudiante *est){
        int cod;
        string nom, asigna;
        double n,n2,n3;
        cout<<"Digite  Codigo del Estudiante: ";
        cin>>cod;
        est->Setcodigo(cod);
        cout<<"Digite Nombre del Estudiante: ";
        cin.ignore();
        getline(cin , nom);
        est->Setnombre(nom);
        cout<<"Digite la asignatura:";
        cin >> asigna;
        est->SetAsignatura(asigna);
        cout<<"Digite Nota del primer corte del Estudiante: ";
        cin>>n;
        est->Setnota(n);
        cout<<"Digite Nota del segundo corte del Estudiante: ";
        cin>>n2;
        est->Setnota2(n2);
        cout<<"Digite Nota del tercer corte del Estudiante: ";
        cin>>n3;
        est->Setnota3(n3);


    }
