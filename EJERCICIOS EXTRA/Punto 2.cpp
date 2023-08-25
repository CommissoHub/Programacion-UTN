#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int grados;
    double radianes;
    double PI= 3.1416;

    cout<<"Ingrese un angulo en grados: ";
    cin>>grados;

    radianes = grados* (PI/180);

    cout<<"Radianes= "<<radianes<<endl;

    if (grados > 360) {
    int vueltas = grados / 360;
    cout << "El ángulo ingresado da " << vueltas << " vueltas completas." << endl;

    int Resto = grados%360;
    

    if (Resto < 90) {
        cout << "El ángulo está en el primer cuadrante." << endl;
    } else if (Resto < 180) {
        cout << "El ángulo está en el segundo cuadrante." << endl;
    } else if (Resto < 270) {
        cout << "El ángulo está en el tercer cuadrante." << endl;
    } else {
        cout << "El ángulo está en el cuarto cuadrante." << endl;
    }
}

    

    }
