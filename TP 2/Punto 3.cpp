#include <iostream>
#include <cmath>

int main()
{
double angulo, radianes;
const double PI = 3.1416;//la palabra clave const se utiliza para declarar una variable que no se puede modificar después de su inicialización. 

std::cout<<"Ingrese un angulo en grados: ";
std::cin>> angulo;

radianes = angulo * PI / 180;

double coseno = cos(radianes);
double seno = sin(radianes);
double tangente = tan(radianes);

std::cout<<"El coseno de "<<angulo<<" grados es "<<coseno<<std::endl;
std::cout<<"El seno de "<<angulo<<" grados es "<<seno<<std::endl;
std::cout<<"La tangente de "<<angulo<<" grados es "<<tan<<std::endl;
return 0;
}