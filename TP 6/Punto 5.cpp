#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ordenamientoSeleccionDirecta(int arreglo[], int longitud);
int busquedaBinaria(int arreglo[], int longitud, int numero);

int main()
{
    // Cargar arreglo con números aleatorios
    const int longitud = 10;
    int arreglo[longitud];

    srand(time(0)); // Semilla aleatoria basada en el tiempo actual

    cout << "Arreglo original: ";
    for (int i = 0; i < longitud; i++) {
        arreglo[i] = rand() % 100; // Generar número aleatorio entre 0 y 99
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Ordenar arreglo de manera ascendente
    ordenamientoSeleccionDirecta(arreglo, longitud);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < longitud; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Búsqueda binaria
    int numero;
    cout << "Ingrese un número a buscar: ";
    cin >> numero;

    int indice = busquedaBinaria(arreglo, longitud, numero);
    if (indice != -1) {
        cout << "El número " << numero << " se encuentra en la posición " << indice << " del arreglo." << endl;
    } else {
        cout << "El número " << numero << " no se encuentra en el arreglo." << endl;
    }

    return 0;
}

// Implementación del algoritmo de ordenamiento por selección directa
void ordenamientoSeleccionDirecta(int arreglo[], int longitud)
{
    for (int i = 0; i < longitud - 1; i++) {
        int indiceMinimo = i;

        for (int j = i + 1; j < longitud; j++) {
            if (arreglo[j] < arreglo[indiceMinimo]) {
                indiceMinimo = j;
            }
        }

        if (indiceMinimo != i) {
            int temp = arreglo[i];
            arreglo[i] = arreglo[indiceMinimo];
            arreglo[indiceMinimo] = temp;
        }
    }
}

/*Búsqueda Binaria: 
Se utiliza cuando el vector en el que queremos determinar la existencia de un elemento está previamente ordenado. 
Este algoritmo reduce el tiempo de búsqueda considerablemente, 
ya que disminuye exponencialmente el número de iteraciones necesarias.*/ 
int busquedaBinaria(int arreglo[], int longitud, int numero)
{
    int izquierda = 0;
    int derecha = longitud - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (arreglo[medio] == numero) {
            return medio; // El número se encontró en la posición medio
        } else if (arreglo[medio] < numero) {
            izquierda = medio + 1; // El número está en la mitad derecha del subarreglo
        } else {
            derecha = medio - 1; // El número está en la mitad izquierda del subarreglo
        }
    }

    return -1; // El número no se encontró en el arreglo
}