#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra de no más de 10 letras: ";
    cin >> palabra;

    // Verificar que la palabra no supere los 10 caracteres
    if (palabra.length() > 10) {
        cout << "La palabra ingresada supera los 10 caracteres." << endl;
        return 0;
    }

    char arreglo[10]; // Arreglo de caracteres de tamaño 10

    // Llenar el arreglo desde atrás hacia adelante
    int j = 9; // Índice inicial del arreglo
    for (int i = palabra.length() - 1; i >= 0; i--) {
        arreglo[j] = palabra[i];
        j--;
    }

    // Llenar los espacios restantes con *
    for (int i = j; i >= 0; i--) {
        arreglo[i] = '*';
    }

    // Mostrar el contenido del arreglo
    cout << "El contenido del arreglo es: ";
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i];
    }
    cout << endl;

    return 0;
}