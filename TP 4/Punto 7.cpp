#include <iostream>
using namespace std;
int main()
{
    int num;
    bool esPrimo= true;

    cout<<"Ingrese un numero: ";
    cin>>num;

    if (num<=1)
    {
        esPrimo=false;
    }
    else
    {
        int divisor = 2;
    while(divisor < num){
        
    if(num%divisor == 0){
    esPrimo=false;
    break;
    }
    divisor++;
    }
    }
    if(esPrimo)
    {
        cout<<num<<" es un numero primo"<<endl;
    }
    else{
        cout<<num<<" no es un numero primo"<<endl;
    }
    return 0;
}