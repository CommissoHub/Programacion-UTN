#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    float Nota1, Nota2, Nota3, Promedio;

    cout<<"Colocar nota del primer parcial: ";
    cin>>Nota1;
    cout<<"Colocar nota del segundo parcial: ";
    cin>>Nota2;
    cout<<"Colocar nota del tercer parcial: ";
    cin>>Nota3;

    Promedio= (Nota1 + Nota2 + Nota3)/3;

    cout<<"El promedio es: "<<Promedio<<endl;
    cout<<"El promedio redondeado es: "<<round(Promedio)<<endl;
    cout<<"El promedio truncado es: "<<trunc(Promedio)<<endl;
    return 0;
}