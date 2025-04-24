#include <iostream>
#include <list>
using namespace std;

class car
{
private:
    string Company;
    string Model;
    int Year;
public:
    car( string company, string model, int year){
        Company = company;
        Model =     model;
        Year = year;
    }
    void getInfo()
    {
        cout << Company << "- " << Model<< "- "<< Year << endl;

    }
};

class myCar: public car{
    public:
        myCar( string company, string model, int year):car(company, model, year){

        }
        void firstProof()
        {
            cout << "only first car has it" << endl;
        }
};

class mysecondCar: public car{
    public:
        mysecondCar( string company, string model, int year):car(company, model, year){

        }
        void secondProof()
        {
            cout << "only second car has it" << endl;
        }
};








int main()
{
    myCar firstCar("Hynday","sonata", 2024);
    firstCar.getInfo();
    firstCar.firstProof();

    mysecondCar secondCar("Cadalac", "cx5", 2026);
    secondCar.getInfo();
    secondCar.secondProof();
}