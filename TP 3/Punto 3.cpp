#include <iostream>
#include <string>

using namespace std;

int main()
{
    char Letra;
    cout<<" Ingrese una letra: ";
    cin >> Letra; 
    

    switch (Letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<Letra<<" es una vocal. "<<endl;
            break;
        default:
        cout<<Letra<<" no es una vocal. "<<endl;
        break;

        return 0;
    }

}