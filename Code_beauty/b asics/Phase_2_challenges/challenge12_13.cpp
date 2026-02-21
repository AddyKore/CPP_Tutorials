#include <iostream>
using namespace std;
struct Robot{
    string Name;
    int batteryLevel;
    bool isActive;
};

void chargeRobot(Robot& r, int Amount)
{
    int bL=r.batteryLevel;
    while(r.batteryLevel<Amount){
        r.batteryLevel++;

    }
}
bool canStartMission(const Robot& r)
{
    if ( r.batteryLevel>=20 && r.isActive){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    Robot R1;
    R1.batteryLevel = 15;
    R1.isActive=1;
    R1.Name="dobo";

    chargeRobot(R1, 0);
    cout << canStartMission(R1) << endl;
}

