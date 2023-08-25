#include <iostream>
using namespace std;

void ordenamientoInsercion(int arreglo[]);
void ordenamientoInsercionIntercambios(int arreglo[]);
void ordenamientoSeleccionDirecta(int arreglo[]);
void ordenamientoBurbujeo(int arreglo[]);

void imprimirArreglo(int arreglo[])
{
    int i = 0;
    for(i=0;i<6;i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arreglo[] = {5, 2, 8, 1, 6, -1};

    cout << "Arreglo original: ";
    imprimirArreglo(arreglo);

    // Ordenamiento por inserción
    ordenamientoInsercion(arreglo);
    cout << "Ordenamiento por insercion: ";
    imprimirArreglo(arreglo);

    // Ordenamiento por inserción con intercambios
    ordenamientoInsercionIntercambios(arreglo);
    cout << "Ordenamiento por insercion con intercambios: ";
    imprimirArreglo(arreglo);

    // Ordenamiento por selección directa
    ordenamientoSeleccionDirecta(arreglo);
    cout << "Ordenamiento por seleccion directa: ";
    imprimirArreglo(arreglo);

    // Ordenamiento por burbujeo
    cout << "Ordenamiento por burbujeo: ";
    ordenamientoBurbujeo(arreglo);

    return 0;
}

/*ORDENAMIENTO POR INSERCION
Este algoritmo recorre el arreglo de elementos e inserta cada elemento en su posición correcta en la parte ordenada del arreglo. 
Comienza desde el segundo elemento (i = 1) y compara su valor con los elementos anteriores, 
desplazándolos hacia la derecha hasta encontrar la posición correcta para insertar el valor actual. Se repite este proceso 
hasta que todos los elementos hayan sido insertados en la posición correcta. 
Este algoritmo tiene una complejidad de tiempo promedio de O(n^2).*/
void ordenamientoInsercion(int arreglo[])
{
    int i = 1;
        for (int i = 1; i < 6; i++) {
        int valorActual = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] > valorActual) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }

        arreglo[j + 1] = valorActual;
        
    
}}

/*ORDENAMIENTO POR INSERCION CON INTERCAMBIO
Este algoritmo también utiliza el método de inserción, pero en lugar de desplazar los elementos hacia la derecha, 
intercambia el valor actual con el valor anterior repetidamente hasta que el valor actual esté en la posición correcta. 
Comienza desde el segundo elemento (i = 1) y compara su valor con los elementos anteriores, intercambiándolos si el valor actual es menor. 
Se repite este proceso hasta que todos los elementos estén en su posición correcta. 
Al igual que el anterior, tiene una complejidad de tiempo promedio de O(n^2).*/
void ordenamientoInsercionIntercambios(int arreglo[])
{
    int i = 1;
    for(i=1;i<6;i++){
        int j = i;
        while (j > 0 && arreglo[j] < arreglo[j - 1]) {
            int temp = arreglo[j];
            arreglo[j] = arreglo[j - 1];
            arreglo[j - 1] = temp;
            j--;
        }
       
    }
}

/*ORDENAMIENTO POR SELECCION
Buscar el mínimo elemento de la lista.
Intercambiar con el primer elemento.
Buscar el mínimo del resto de la lista.
Intercambiar con el segundo.
Y así sucesivamente.*/ 
void ordenamientoSeleccionDirecta(int arreglo[])
{
    for (int i = 0; i < 6 - 1; i++) {
        int indiceMinimo = i;

        for (int j = i + 1; j < 6; j++) {
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

/*ORDENAMIENTO METODO BURBUJA
Es un sencillo algoritmo de ordenamiento. 
Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, 
intercambiándolos de posición si están en el orden equivocado. 
Es necesario revisar varias veces toda la lista hasta que no se necesiten 
más intercambios, lo cual significa que la lista está ordenada.*/
void ordenamientoBurbujeo(int arreglo[])
{
    int i, j, temp;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 6; i++) {
        cout << arreglo[i] << " ";
    }
}