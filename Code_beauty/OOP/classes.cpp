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

};

int main()
{

    car car1;
    car1.brand = "Hyndai";
    car1.make = "Sonata";
    car1.year = 2025;

    cout << "Car brand   :  " << car1.brand << endl;
    cout << "Car make   :  " << car1.make << endl;
    cout << "Car year   :  " << car1.year << endl;
    

}