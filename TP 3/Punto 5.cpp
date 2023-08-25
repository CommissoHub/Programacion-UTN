#include <iostream>


using namespace std;

int main()
{
    float SueldoSemanal, CantidadHoras;
    cout<<"Ingrese la cantidad de horas trabajadas esta semana: ";
    cin>>CantidadHoras;

    if (CantidadHoras<=40){
        SueldoSemanal= CantidadHoras*1000;

        cout<<"Su sueldo semanal es: $"<<SueldoSemanal;
    }
        else if (CantidadHoras>40){
            SueldoSemanal=CantidadHoras*2000;

            cout<<"Su sueldo semanal es: $"<<SueldoSemanal;
        }
        return 0;

    }

