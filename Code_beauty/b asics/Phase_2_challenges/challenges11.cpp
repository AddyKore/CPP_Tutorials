#include <iostream>
using namespace std;
#include <string>

struct Robot
{
    string name;
    int batteryLevel;
    bool isActive;
};

void RobotStatus(const Robot& R)
{
    if ( R.isActive && R.batteryLevel>20){
        cout << R.name<<" is active" << endl;
    }
    else{
        cout << R.name<< " is not active" << endl;

    }
}

int main()
{
    Robot R1;
    cout << "Enter your Robot`s name" <<endl;
    cin>>R1.name ;
    cout << "Enter Robot`s battery" <<endl;
    cin>> R1.batteryLevel ;
    cout << "Enter Robot`s state 1 or 0" <<endl;
    cin>> R1.isActive;

    RobotStatus(R1);

}