#include <iostream>
#include <cmath>

int main()
{
    double Hipotenusa, CatetoOpuesto, CatetoAdyacente;
    std::cout<<"Colocar medida del cateto adyacente del triangulo rectangulo: ";
    std::cin>>CatetoAdyacente;

    std::cout<<"Colocar medida del cateto opuesto del triangulo rectangulo: ";
    std::cin>>CatetoOpuesto;

    Hipotenusa = sqrt(pow(CatetoAdyacente,2)+pow(CatetoOpuesto,2));

    std::cout<<"La hipotenusa del triangulo rectangulo es: "<<Hipotenusa<<std::endl;
    return 0;




}