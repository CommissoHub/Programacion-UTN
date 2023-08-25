#include <iostream>
using namespace std;

int valorMaximo(int matriz[]);

int main()
{
    int matriz[] = {1, 2, 3, 4, 5, -1, 43, 23};
    int maximo = valorMaximo(matriz);
    cout << "El valor maximo de la matriz es: " << maximo << endl;

    return 0;
}

int valorMaximo(int matriz[])
{
    int maximo = matriz[0];  // Inicializamos el máximo con el primer elemento del arreglo

    for (int i = 1; matriz[i] != -1; i++) {
        if (matriz[i] > maximo) {
            maximo = matriz[i];
        }
    }

    return maximo;
}