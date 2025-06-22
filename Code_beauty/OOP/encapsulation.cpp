#include <iostream>
#include <list>
#include <string>
using namespace std;

class car
{
private:
    int carKey;
    int masterKey = 1234;

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
    void getInfo()
    {
        cout << "New Car brand   :  " << brand << endl;
        cout << " New Car make   :  " << make << endl;
        cout << "new Car year   :  " << year << endl;
        
    }
    void resetKey(int carNewKey, int CarMasterKey)
    {
        if ( CarMasterKey == masterKey)
        {
            carKey = carNewKey;
            cout << "Car key updated" << endl;
        }
        else{
            cout << "Incorrect Master Key" << endl;
        }
    }

};

int main()
{

    car car1("Hyundai", "Sonata", 2025);
    car1.getInfo();
    cout << "enter car key and master key" << endl;
    int carKey, masterKey;
    cin >> carKey >> masterKey;
    car1.resetKey(carKey, masterKey);
    

}   