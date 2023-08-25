#include <iostream>
#include <string>
using namespace std;
int main()
{
    string palabra;
    cout<<"Ingrese una palabra: ";
    cin>> palabra;
    int i=0;
    int longitud = palabra.length();
    cout << "Las letras de la palabra son:" << endl;
    while(i<longitud)
    {
        cout<<palabra[i]<<endl;
        i++;
    }

return 0;
}