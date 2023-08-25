 #include <string>
 #include <iostream>
    using namespace std;
 int main()
 {
    string Destino1 = "Mar del Plata";
    string Destino2 = "Bariloche";
    string aux; 

    cout<<"Destino 1: "<< Destino1<<endl;
    cout<<"Destino 2: "<< Destino2<<endl;

    aux=Destino1;
    Destino1=Destino2;
    Destino2=aux;

    cout<<"\nDestino 1: "<<Destino1<<endl;
    cout<<"Destino 2: "<<Destino2<<endl;

    return 0;


 }