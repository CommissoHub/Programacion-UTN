#include <iostream>

using namespace std;

int main()
{
    char Letra; 
     cout << " Ingrese una letra: ";
     cin >> Letra;

    if (Letra=='a' || Letra=='e' || Letra=='i' || Letra=='o' || Letra=='u' || 
    Letra=='A' || Letra=='E' || Letra =='I' || Letra=='O' || Letra=='U'){
        cout<<"Es una vocal"<<endl;
    } else { 
        cout<<"No es una vocal"<<endl;
    }
     
 return 0;
}
