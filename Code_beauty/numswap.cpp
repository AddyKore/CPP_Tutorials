#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << " Enter two numbers \n";
    cin >> a >> b; 

    cout << " a = " << a << "  and  b = " << b << endl;

    int c= a;
    a=b;
    b=c;
    cout << "after swap"; 
    cout << " a = " << a << "  and  b = " << b << endl;

    cout << " RESET \n";

    c=b;
    b=a;
    a=c;

    cout << "after reset"; 
    cout << " a = " << a << "  and  b = " << b << endl;



}