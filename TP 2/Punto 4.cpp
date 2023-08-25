#include <iostream>
using namespace std;


int main()
{
    double Radio, Perimetro, Area;
    const double PI = 3.1416;

    cout << "Ingrese el valor del radio: ";
    cin >>Radio;

    Perimetro = 2 * PI * Radio;
    Area = PI * Radio*Radio;

    cout<<"El area del circulo es: "<<Area<<endl;
    cout<<"El perimetro del circulo es: "<<Perimetro<<endl;

    return 0;

}