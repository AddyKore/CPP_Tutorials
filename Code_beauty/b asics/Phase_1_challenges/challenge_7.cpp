#include <iostream>
using namespace std;

int square(int n)
{
    return n*n;
}
int main()
{
    cout<<"Enter a number"<<endl;
    float a;
    cin>>a;

    cout << "the square of " << a << " is " << square(a) << endl;

}