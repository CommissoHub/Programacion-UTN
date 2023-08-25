#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int numeroAdivinar, numeroIngresado, intentos=0;
    srand(time(NULL));


    numeroAdivinar= rand() % 100+1;

    do{
        cout<<"Ingrese un numero: ";
        cin>>numeroIngresado;

        if(numeroIngresado>numeroAdivinar){
            cout<<"El numero ingresado es mayor al numero ha adivinar\n";
        }
        else if(numeroIngresado<numeroAdivinar){
            cout<<"El numero ingresadio en menor al numero ha adivinar\n";
        }
        else{
            cout<<"\nFelicidades, has adividado el numero";

            intentos++;
        }
    }while(numeroIngresado != numeroAdivinar);

    cout << "\n\nIntentos realizados: " << intentos << endl;

    return 0;
}

