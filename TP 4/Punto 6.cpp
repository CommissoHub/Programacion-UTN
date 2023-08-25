#include <iostream>
using namespace std;
int main()
{
    int num;
    int factorial=1;

    cout<<"Ingrese un numero: ";
    cin>>num;

    cout<<"El factorial del numero es: "<<endl;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    }
    else{
    for(int i=1; i<=num; i++)
    {
        factorial*=i;
        
    }
    cout << "El factorial de " << num << " es: " << factorial << endl;
    }
    return 0;
}