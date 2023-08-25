#include <iostream>

int main()
{
    int lado;
    std::cout<<"Ingrese el tamaño del lado del cuadrado: ";
    std::cin>>lado;
    
    for (int i=0; i<lado; i++){
        for(int j=0; j<lado; j++){
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)   {
            std::cout << "*   ";
        } 
        else{
            std::cout << "    ";
        }
        }
        std::cout<<std::endl;
    }
    return 0;

}