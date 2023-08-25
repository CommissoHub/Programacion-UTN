#include <iostream>
using namespace std;

int main(){

int num;

cout << "Ingrese un numero entero positivo: ";
cin >> num;

if(num<=0){
    cout << "El numero ingresado no es valido, debe ser un entero positivo" << endl;

    return 0;
}

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (i == j) {
                cout << i << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
