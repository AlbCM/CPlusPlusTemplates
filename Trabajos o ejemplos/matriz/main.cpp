
#include <iostream>
using namespace std;


int mat[100][100], T;

void solicitar(){
    cout << "Ingrese el tamano de la matriz" << endl;
    cin >> T;
}


void llenar(){
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << "Elemento " << i << " , " << j << " :";
            cin >> mat[i][j];
        }
    }
}

void mostrar(){
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void matrizNula(){
    
    
}

void propiedad1(){
    // Creamos matriz que contiene todos sus valores en 0 y la resultante
    int nula[T][T], res[T][T];
    // Llenamos la matriz nula
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            nula[i][j]=0;
        }
    }
    //Realizamos la operacion de suma
    for(int i=0; i<T; i++){
        for(int j=0;j<T;j++){
            res[i][j]= mat[i][j] + nula[i][j];
        }
    }
    
    cout<<"MATRIZ ORIGINAL"<<endl;
    mostrar();
    cout<<"MATRIZ NULA"<<endl;
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << nula[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"MATRIZ RESULTANTE Amn + 0mn"<<endl;
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void propiedad2(){
    // Creamos matriz que contiene todos sus valores en 0 y la resultante
    int nula[T][T], res[T][T];
    // Llenamos la matriz nula
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            nula[i][j]=0;
        }
    }
    //Realizamos el producto
    for(int i=0; i<T; i++){
        for(int j=0;j<T;j++){
            res[i][j]=0;
            for(int l=0;l<T;l++){
                res[i][j]= res[i][j] +(mat[i][l]*nula[l][j]);
            }
            
        }
    }
    
    cout<<"MATRIZ ORIGINAL"<<endl;
    mostrar();
    cout<<"MATRIZ NULA"<<endl;
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << nula[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"MATRIZ RESULTANTE A*O=0"<<endl;
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

}



void menu(){
    cout << "MENU DE OPCIONES" << endl;
    cout << "1. Llenar Matriz" << endl;
    cout << "2. Propiedad 1 " << endl;
    cout << "3. Propiedad 2" << endl;
    cout << "4. Propiedad 5" << endl;
    cout << "5. Salir" << endl;
}

int main() {
    cout << "\n" << endl;
    solicitar();
    int opcion = 0;
    do{
        menu();
        cout << "Digite una opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1: llenar(); break;
            case 2: propiedad1();
                    break;
            case 3: propiedad2();
                    break;
        }
        
    } while( opcion != 5);
    return 0;
}

