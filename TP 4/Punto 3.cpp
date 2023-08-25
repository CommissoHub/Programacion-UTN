#include <iostream>
using namespace std;
int main()
{
    int suma = 0;
    int n;
    int contador = 1;

    cout<<"Ingrese un valor: ";
    cin>>n;

    while(contador<=n)
    {
        suma += contador;
        contador++;
    }
    cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<suma<<endl;
    return 0;
}