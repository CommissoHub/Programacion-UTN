#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int filas = 10;
    const int columnas = 10;
    int matriz[filas][columnas];
    int sumafilas[filas]={0};
    int numeroIngresado, numeroAdivinar;
    srand(time(NULL));

    // Completar la matriz con números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100 + 1;

        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            sumafilas[i] += matriz[i][j];
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";        
        }
        cout << endl<<"\n";
        }  
    
    for (int i = 0; i < filas; i++) {
        cout <<"Suma de la fila " << i + 1 << ": " << sumafilas[i] << endl;
    }
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++){
        }
}
int numeroingresado;

do{
    bool encontrado = false;
    

    cout << "\nIngrese un numero: ";
    cin >> numeroingresado;

    // Buscar el número en la matriz
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            
                if (numeroingresado == matriz[i][j]) {
                cout << "\nEl numero ingresado se encuentra en la columna " << j+1 << " y fila " << i+1 << endl;
                encontrado = true;
            }
            
        }
    }

    if (!encontrado) {
        cout << "La busqueda finalizo sin exito" << endl;
    }
}while(numeroingresado != 0);

    return 0;
}