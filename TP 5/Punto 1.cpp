#include <iostream>

using namespace std;

int main(){
    int numeros[10];
    int suma=0;

    for(int i=0; i<10; i++){
        cout<<"Ingrese 10 numeros: ";
        cin>>numeros[i];
    }
    for(int i=0; i<10;i++){
        suma+=numeros[i];
    }
    cout << "La suma de los números es: " << suma << endl;

    return 0;

    
}