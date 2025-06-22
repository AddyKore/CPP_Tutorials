#include <iostream>
using namespace std;

template<typename T>
void swapi( T& a, T& b)
{
    cout << a << " - " << b << endl;
    T temp = a;
    a=b;
    b=temp;
    cout << a << " - " << b << endl;

}


int main()
{
    int a =2;
    int b = 3;
    swapi(a,b);

    char c ='c';
    char d ='d';
    swapi(c,d);

}

