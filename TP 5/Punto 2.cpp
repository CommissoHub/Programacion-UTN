#include <iostream>

using namespace std;
int main(){
    
    double numeros[]={24, 5, 58, 100, 0, -8, 94, 96, -16, 105};
    double num;
    bool encontrado=false;

    cout<<"ingrese un numero: ";
        cin>>num;

    for(int i=0; i<10; i++){

        if(numeros[i]==num){
            cout<<"Tu numero se encuentra en la posicion "<<i<<endl;
            encontrado=true;
            break;
        }
    }
        if (!encontrado) {
        cout << "El número no se encontró en el arreglo." << endl;
    }
    
    return 0;
}