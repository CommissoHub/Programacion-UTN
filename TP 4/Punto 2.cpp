#include <iostream>
using namespace std;
int main()
{
   
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    cout<<"Tabla de multimplicar de numero"<<num<<": "<<endl;

    for(int i=1; i<=10; i++)
    {
        int result= num*i;

        cout<<num<<"x"<<i<<"= "<<result<<endl;
    }
}