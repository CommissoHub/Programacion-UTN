#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int filas = 3;
const int columnas = 3;

int menu();
void cargarMatrizAleatoria(int matriz[filas][columnas]);
void cargarMatrizManual(int matriz[filas][columnas]);
void buscarValorIngresado(const int matriz[filas][columnas]);
int devolverValorMaximo(const int matriz[filas][columnas]);
void ordenarValoresAscendentes(int matriz[filas][columnas]);
void ordenarValoresDescendentes(int matriz[filas][columnas]);
int devolverValorMinimo(const int matriz[filas][columnas]);
int calcularDeterminante(const int matriz[filas][columnas]);
void salirDelPrograma();

int main() {
    int matriz[filas][columnas];
    int opcion;

    while (true) {
        opcion = menu();

        switch (opcion) {
            case 1:
                cargarMatrizAleatoria(matriz);
                break;
            case 2:
                cargarMatrizManual(matriz);
                break;
            case 3:
                buscarValorIngresado(matriz);
                break;
            case 4:
                cout << "El valor máximo es: " << devolverValorMaximo(matriz) << endl;
                break;
            case 5:
                cout << "El valor mínimo es: " << devolverValorMinimo(matriz) << endl;
                break;
            case 6:
                ordenarValoresAscendentes(matriz);
                break;
            case 7:
                ordenarValoresDescendentes(matriz);
                break;
            case 8:
                calcularDeterminante(matriz);
                break;
            case 0:
                salirDelPrograma();
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }

        cout << endl;
    }

    return 0;
}

int menu() {
    int opcion;

    cout << "MENU" << endl;
    cout << "1. Cargar matriz con números aleatorios" << endl;
    cout << "2. Cargar matriz de forma manual" << endl;
    cout << "3. Buscar valor en la matriz" << endl;
    cout << "4. Devolver valor máximo de la matriz" << endl;
    cout << "5. Devolver valor mínimo de la matriz" << endl;
    cout << "6. Ordenar valores de la matriz de forma ascendente" << endl;
    cout << "7. Ordenar valores de la matriz de forma descendente" << endl;
    cout << "8. Calcular determinante de la matriz" << endl;
    cout << "0. Salir" << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;

    return opcion;
}

void cargarMatrizAleatoria(int matriz[filas][columnas]) {
    srand(time(NULL));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    cout << "Matriz generada aleatoriamente:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void cargarMatrizManual(int matriz[filas][columnas]) {
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese los valores de la matriz: " << endl;
            cin >> matriz[i][j];
    }
}
cout << "Matriz generada manualmente: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void buscarValorIngresado(const int matriz[filas][columnas]) {
    int valor;
    bool encontrado = false;

    cout << "Ingrese un valor a buscar: ";
    cin >> valor;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == valor) {
                cout << "El valor " << valor << " se encuentra en la posición (" << i+1 << ", " << j+1 << ")" << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "El valor " << valor << " no se encuentra en la matriz." << endl;
    }
}

int devolverValorMaximo(const int matriz[filas][columnas]) {
    int maximo = matriz[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
    }

    return maximo;
}

void ordenarValoresAscendentes(int matriz[filas][columnas]) {
    
    int temp;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = i; k < filas; k++){
                int caux=0;
                if(i == k){
                    caux=j+1;
                }
                for(int l=caux; l<columnas; l++)
                    if (matriz[i][j] > matriz[k][l]) {
                        temp = matriz[k][l];
                        matriz[k][l] = matriz[i][j];
                        matriz[i][j] = temp;
                }
            }
        }
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
}

void ordenarValoresDescendentes(int matriz[filas][columnas]) {
    int valoresTotales = filas * columnas;
    int temp;

    for (int k = 0; k < valoresTotales; k++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas - 1; j++) {
                if (matriz[i][j] < matriz[i][j + 1]) {
                    temp = matriz[i][j];
                    matriz[i][j] = matriz[i][j + 1];
                    matriz[i][j + 1] = temp;
                }
            }
        }
    }
    cout << "La matriz se ha ordenado de forma descendente." << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
    

int devolverValorMinimo(const int matriz[filas][columnas]) {
    int minimo = matriz[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }

    return minimo;
}

int calcularDeterminante(const int matriz[filas][columnas]) {
    int determinante;
    determinante = matriz[0][0]*(matriz[1][1]*matriz[2][2]-matriz[2][1]*matriz[1][2])-matriz[0][1]*(matriz[1][0]*matriz[2][2]-matriz[2][0]*matriz[1][2])+
    matriz[0][2]*(matriz[1][0]*matriz[2][1]-matriz[2][0]*matriz[1][1]);

    cout<<"El determinante es: "<<determinante<<endl;

    return determinante;
}

void salirDelPrograma() {
    exit(0);
}
