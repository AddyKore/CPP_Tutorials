#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << " enter array lenght" << endl;
    cin>> n;
    int* firstArray = new int[n];
    cout << " Enter all array elements"<< endl;

    for( int i =0; i<n ; i++)
    {
        cin >> firstArray[i] ;     
        
    }

    cout << " Array :" << endl;
    for ( int j =0 ; j < n ; j++)
    {
        cout << firstArray[j] << " , " ;
    }

  

}