#include <iostream>
using namespace std;

int main()
{
    cout << " Please enter the sides of triangle" << endl;
    int a,b,c;
    cin >> a >> b >> c;

    if ( a==b && b==c)
    {
        cout << "Equilateral \n";
    }
    else if ( a!=b && b!=c && c!=a)
    {
        cout << "Scalar \n";
    }
    else 
    {
        cout << "Iso \n";
    }
}