#include <iostream>
#include <string>

using namespace std;
void printRobotStatus(string n, bool a, int batteryLevel)
{
    if ( batteryLevel > 20 && a){
        cout <<n << " is ready for action " << endl;
    }
    else if(batteryLevel < 20) {
        cout << " Battery Low !!! " << endl;

    }
    else{
        cout << " Activate the robot and try again " << endl;

    }
}

int main()
{
    cout << "Enter your robot`s name" << endl;
    string n;
    cin>>n;

    cout << "Enter your robot`s battery level" << endl;
    float b;
    cin>>b;

    cout << "Is the robot active? ( 1 or 0 )" << endl;
    bool a;
    cin>>a;


    printRobotStatus(n, a, b);
    return 0;

}