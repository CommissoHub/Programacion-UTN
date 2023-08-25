#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, B, Y, A;

    b = 4;
    A = 90;
    Y = 60;
    B = 180-A-Y;
    a = tan(B)*4;
    c = pow(b,2)+pow(a,2);

    cout<<"a= "<<a<<endl;
    cout<<"c= "<<c<<endl;
    cout<<"B= "<<B<<endl;

    return 0;


}