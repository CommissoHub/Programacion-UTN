#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N = 16;
    int arreglo[N];
    srand(time(NULL));

    // Cargar el arreglo con valores aleatorios
    for (int i = 0; i < N; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

    // Copiar los valores del arreglo en la matriz de 4x4
    int matriz[4][4];
    int indice = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = arreglo[indice];
            indice++;
        }
    }

    // Imprimir la matriz
    cout << "Matriz de 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}