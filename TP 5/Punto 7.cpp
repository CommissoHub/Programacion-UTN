#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            int suma= i+j;
            cout<<"  "<<suma;
        }
        cout<<endl;
    }
    return 0;
}