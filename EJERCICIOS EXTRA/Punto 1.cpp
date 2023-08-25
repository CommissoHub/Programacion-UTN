#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout<<"Ingrese un numeros enteros: ";
    cin >> num1;

    cout<<"Ingrese otro numero entero: ";
    cin>>num2;


 if (num1>num2){
    int temp=num1;
    num1=num2;
    num2=temp;

    
}
 cout<<"El primer numero ingresado es "<<num1<<endl;
 cout<<"El segundo numero ingresado es "<<num2<<endl;
return 0;
}