#include <iostream>
using namespace std;

const int filas = 5;
const int columnas = 5;

int main() {
    char matriz[filas][columnas];

    // Pedir al usuario que ingrese los valores de la diagonal principal
    cout << "Ingrese los valores de la diagonal principal:" << endl;
    for (int i = 0; i < filas; i++) {
        cout << "Valor para la posicion (" << i << ", " << i << "): ";
        cin >> matriz[i][i];
    }

    // Completar los otros lugares con "X"
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i != j) { // Si no estamos en la diagonal principal
                matriz[i][j] = 'X';
            }
        }
    }

    // Imprimir la matriz
    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}