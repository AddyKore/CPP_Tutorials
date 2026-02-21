#include <iostream>
using namespace std;

void printRobotStatus(int batteryLevel)
{
    if ( batteryLevel > 20){
        cout << " Battery Sufficiant " << endl;
    }
    else{
        cout << " Battery Low !!! " << endl;

    }
}

int main()
{
    cout << "Enter your robot`s battery level" << endl;
    float b;
    cin>>b;
    printRobotStatus(b);
    return 0;

}