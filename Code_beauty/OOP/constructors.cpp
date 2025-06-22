#include <iostream>
#include <list>
#include <string>
using namespace std;

class car
{
public:
    string brand;
    string make;
    int year;

    car( string b, string m, int y)
    {
        brand = b;
        make = m;
        year = y;
    }

};

int main()
{

    car car1("Hyundai", "Sonata", 2025);

    cout << "New Car brand   :  " << car1.brand << endl;
    cout << " New Car make   :  " << car1.make << endl;
    cout << "new Car year   :  " << car1.year << endl;

}