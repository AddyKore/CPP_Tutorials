#include <iostream>
using namespace std;

float avg_cal(int a[5])
{
    int total=0;
    for ( int i=0; i<5;i++){
        total = total + a[i];
    }
    float avg = total/5;
    return avg;
}

int main()
{
    cout << "Enter 5 sendor values" << endl;
    int a[5];

    for (int i=0; i<5; i++){
        cin>>a[i];
    }

    cout << " Avg. Sensor values : " << avg_cal(a) <<endl;


}