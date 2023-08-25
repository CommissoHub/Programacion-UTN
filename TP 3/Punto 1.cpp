#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Num;
    cout<<" Ingresa un numero ";
    cin >>Num; 


    if (Num % 2 == 0){
        cout<<Num<<"es par"<<endl;}
    else{
        cout<<Num<<" es impar "<<endl;
    }
}