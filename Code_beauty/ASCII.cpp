#include <iostream>
using namespace std;
int main()
{
    char c1,c2,c3,c4,c5,c6;
    char name[6];

    cout << "enter 6 letters\n";
    //cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
    //cout << "ASCII Codes - " << int(c1) << " " << int(c2)  << " "<< int(c3)  << " "<< int(c4)  << " "<< int(c5) << " "<< int(c6);
    cin >> name;
    cout << name << endl;
    cout << "ASCII Codes - " << int(name[0])  << " " << int(name[1])  << " "<< int(name[2])  << " "<< int(name[3])  << " "<< int(name[4]) << " "<< int(name[5]);


}