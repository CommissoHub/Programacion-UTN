#include <iostream>
#include <cmath>


int main()
{
    double numero;
    std::cout << "ingrese un numero: ";
    std::cin >> numero;

    if (numero<0){
    std::cout<<"El numero ingresado es negativo, porfavor inrese un numero que sea positivo";
    return 0;


}
{
    double Raiz_cuadrada= sqrt(numero);
    std::cout<< "La raiz cuadrada de "<< numero<< " es "<<Raiz_cuadrada<<std::endl;
    return 0;
    
}}
