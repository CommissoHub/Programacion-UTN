#include <iostream>
using namespace std;

int suma(int num1, int num2);

int main()
{
    int num1, num2;
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    int resultado = suma(num1, num2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}

int suma(int num1, int num2)
{
    return num1 + num2;
}