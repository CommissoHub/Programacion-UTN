#include <iostream>
#include <cmath>

int main()
{
double grados, radianes;
const double PI = 3.1416;//la palabra clave const se utiliza para declarar una variable que no se puede modificar después de su inicialización. 

std::cout<<"Ingrese un valor de grados: ";
std::cin>> grados;

radianes = grados * PI / 180;

std::cout<<grados<< " * "<<PI<<"/"<<180<<" = "<<radianes<<std::endl;
return 0;
}