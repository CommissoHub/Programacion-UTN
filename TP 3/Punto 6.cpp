#include <iostream>
#include <string>

using namespace std;

int main()
{
    char TipoDeMembresia;
    cout<<"Membresia tipo: ";
    cin>>TipoDeMembresia;

    if(TipoDeMembresia =='a'||TipoDeMembresia == 'A'){
        cout<<"Al tener membresia tipo A, tienes un descuento del 10% en tus compras";}

        else if (TipoDeMembresia =='b'||TipoDeMembresia == 'B'){
            cout<<"Al tener membresia tipo B, tienes un descuento del 15% en tus compras";

    }
        else if (TipoDeMembresia =='c'||TipoDeMembresia == 'C'){
            cout<<"Al tener membresia tipo C, tienes un descuento del 20% en tus compras";
    
}
return 0;
}