#include <iostream>
using namespace std;

int sumarMatriz(int matriz[][3], int filas, int columnas);

int main()
{
    const int filas = 2;
    const int columnas = 3;
    int matriz[filas][columnas] = {{1, 2, 3}, {4, 5, 6}};

    int suma= sumarMatriz(matriz, filas, columnas);

    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}

int sumarMatriz(int matriz[][3], int filas, int columnas)
{
    int suma=0;
    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas; j++){
            suma += matriz[i][j];
        }
    }
    return suma;
}

