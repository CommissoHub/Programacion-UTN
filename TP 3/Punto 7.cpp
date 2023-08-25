#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double Nota1,Nota2,Nota3,Promedio;
    cout<<"Coloque la nota del primer examen: ";
    cin>>Nota1;

    cout<<"Coloque la nota del segundo examen: ";
    cin>>Nota2;

    cout<<"Coloque la nota del tercer examen: ";
    cin>>Nota3;

    Promedio= (Nota1+Nota2+Nota3)/3;

    cout<<"El promedio es "<<Promedio<<endl;

    if(Promedio>=60){
        cout<<"Aprobado."<<endl;}
        else if (Promedio<60){
            cout<<"Desaprobado"<<endl;
        }
        return 0;
    }

