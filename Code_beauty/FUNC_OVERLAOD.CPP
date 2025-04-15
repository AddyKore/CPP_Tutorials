#include <iostream>
using namespace std;

int sum(int a, int b);
double sum( double a, double b);
float sum( float a, float b, float c);

int main()
{

    cout << sum(3,3) << endl;
    cout << sum(3.3,3.3) << endl;
    cout << sum( 3, 3.3, 4) << endl;

}

int sum( int a, int b)
{
    cout << " int 2 function" << endl;
    return a+b;
}


double sum( double a, double b)
{
    cout << " double 2 function" << endl;
    return a+b;
}


float sum( float a, float b, float c)
{
    cout << " float 2 function" << endl;
    return a+b+c;
}