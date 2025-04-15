#include <iostream>
using namespace std;
int main()
{
    float h,w;
    cout << " Enter your Height(m) and Weight(kg) \n";
    cin >> h >> w;
    float bmi = w/(h*h);

    if (bmi < 18.5)
        cout << "Underweight\n";
    else if(bmi > 25)
        cout << "Overweight\n";
    else
        cout << "Normal weight\n";

    cout << " BMI " << bmi ;
}