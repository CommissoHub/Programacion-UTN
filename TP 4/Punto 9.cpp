#include <iostream>

int main()
{
    int lado;
    std::cout<<"Ingrese el tamaño del lado del cuadrado: ";
    std::cin>>lado;

    for (int i=0; i<lado; i++){
        for(int j=0; j<lado; j++){

            std::cout<<"*    ";
        }
        std::cout<<std::endl;
    }
    return 0;
}