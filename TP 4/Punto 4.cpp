#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout << "Divisores de " << num << ":" <<endl;

    for(int i=1;i<=num;i++)
    {
       if (num % i == 0) {
            cout << i << endl;
        }
    }

 return 0;

}