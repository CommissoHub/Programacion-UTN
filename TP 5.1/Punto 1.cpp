#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

int filas=6;
int columnas=6;
int matriz[filas][columnas];
srand(time(NULL));

    // Completar la matriz con números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
    
    //Imprimir la matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl<<"\n";
    }

    bool repetido = false;

    // Verificar valores repetidos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = i; k < filas; k++) {
                int l = (k == i) ? j + 1 : 0;  // Evitar comparar un elemento consigo mismo

                for (; l < columnas; l++) {
                    if (matriz[i][j] == matriz[k][l]) {
                        cout << "El valor " << matriz[i][j] << " es repetido en la matriz." << endl;
                        repetido = true;
                    }
                }
            }
        }
    }

    if (!repetido) {
        cout << "No se encontraron valores repetidos en la matriz." << endl;
    }
    return 0;
}
    