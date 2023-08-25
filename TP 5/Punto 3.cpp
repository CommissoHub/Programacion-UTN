#include <iostream>

using namespace std;

int main(){

    int numeros[]= {24, 5, 58, 100, 0, -8, 94, 96, -16, 105};
    int tamano = 10;
    for(int i=0; i<tamano-1; i++){
        for (int j=0; j<tamano-i-1; j++){
            if(numeros[j]>numeros[j+1]){
                int temp=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=temp;
            }

        }
         for (int i = 0; i < tamano; i++) {
        cout << numeros[i] << " ";
    }
    cout<<endl;
    
}return 0;
}