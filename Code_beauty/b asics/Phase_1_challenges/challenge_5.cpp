#include <iostream>
using namespace std;
int main()
{
    cout<<"enter you system temp"<<endl;
    int temp ;
    cin>>temp;

    if (temp>70)
    {
        cout << "System Overheating" << endl;
    }
    else if ( 40<temp<70)
    {
        cout << " System Stable" << endl;
    }
    else
    {
        cout << "System too cold" << endl;
    }

}