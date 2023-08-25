#include <iostream>
#include <string>

using namespace std;

int main()
{
    float Num1, Num2, Num3;
    
    cout<<" Ingrese un numero: ";
    cin>>Num1;
    cout<<" Ingrese un numero: ";
    cin>>Num2;
    cout<<" Ingrese un numero: ";
    cin>>Num3;

    if ((Num1>Num2) && (Num1>Num3)) {
        cout<<Num1<<" es el mayor "<<endl;}
        else if ((Num2>Num1)&&(Num2>Num3)){
            cout<<Num2<<" es el mayor "<<endl;}
        else {
            cout<<Num3<<" es el mayor"<<endl;
        }
        return 0;

    }
    