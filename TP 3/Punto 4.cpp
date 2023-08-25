#include <iostream>
using namespace std;

int main()
{
    int CantidadZapatos;
    int Precio=8000;
    double precio;

    cout<<"Ingrese la cantidad de zapatos que quiere comprar: ";
    cin>>CantidadZapatos;

    if ((CantidadZapatos>=10) && (CantidadZapatos<20)){

         precio = ((Precio*CantidadZapatos)-(Precio*CantidadZapatos)*0.1);
         cout<<"Se le aplica un descuento del 10%, y el precio quedaria en: " <<"$"<<precio;
         cin>>Precio; }
     else if ((CantidadZapatos>=20)&&(CantidadZapatos<30)){

         precio= ((Precio*CantidadZapatos)-(Precio*CantidadZapatos)*0.2);
         cout<<"Se le aplica un descuento del 20%, y el precio quedaria en: "<<"$"<<precio;
     }
         else if (CantidadZapatos>=30){
            precio= ((Precio*CantidadZapatos)-(Precio*CantidadZapatos)*0.4);
            cout<<"Se le aplica un descuento del 40%, y el precio quedaria en: "<<"$"<<precio;
         }
         else if (CantidadZapatos<10){
         precio = CantidadZapatos*8000;
         cout<<"No se le aplica descuento, y el precio quedaria en: "<<"$"<<precio;
         }
         return 0;
         }

    
    




