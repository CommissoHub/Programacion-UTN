#include <iostream>
using namespace std;

int sumarElementos(int matriz[]);

int main()
{
    int matriz[] = {1, 2, 3, 4, 5};

    int resultado = sumarElementos(matriz);
    cout << "La suma de los elementos del arreglo es: " << resultado << endl;

    return 0;
}

int sumarElementos(int matriz[])
{
    int suma=0;
    
    for(int i=0;i<5;i++){
        suma+=matriz[i];
    }

    return suma;
}