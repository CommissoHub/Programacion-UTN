#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double c;
    a=6;
    b=9;
    c=7.5;
    a=b;
    b=c;
    c=a;

    cout<<"El valor de a es: "<<a<<endl;//muestra 9
    cout<<"El valor de b es: "<<b<<endl;//muestra 7, ya que b se encuentra en una variable entera
    cout<<"El valor de c es: "<<c<<endl;//muestra 9

    return 0;
}