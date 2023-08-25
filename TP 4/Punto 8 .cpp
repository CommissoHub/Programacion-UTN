#include <iostream>

int main() {
    double suma = 0;
    int contador = 0;
    double numero;

    do {
        std::cout << "Introduce un número (0 para terminar): ";
        std::cin >> numero;

        if (numero == 0) {
            break;
        }

        suma += numero;
        contador++;
    } while (true);

    if (contador == 0) {
        std::cout << "No se introdujeron números." << std::endl;
    } else {
        double media = suma / contador;
        std::cout << "La media de los números ingresados es: " << media << std::endl;
    }

    return 0;
}







