#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int filas;
    int columnas;
    

    cout<<"Ingrese el numero de filas que desee: ";
    cin>>filas;

    cout<<"Ingrese el numero de columnas que desee: ";
    cin>>columnas;

    int matriz[filas][columnas];

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            int suma= i+j;
            if(suma%2 == 0){
                matriz[i][j]=sqrt(suma);
            }
            else{
                matriz[i][j]=0;
            }
        }
    }
    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
    }
