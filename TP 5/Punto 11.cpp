#include <iostream>

using namespace std;

const int filas = 10;
const int columnas = 10;

int main() {
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i < j) {
                matriz[i][j] = 1;
            } else if (i > j) {
                matriz[i][j] = 0;
            } else {
                matriz[i][j] = 10 - i;
            }
        }
    }

    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}