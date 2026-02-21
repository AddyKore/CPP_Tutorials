#include <iostream>
using namespace std;

class Robot{
    private:
        std::string name;
        int battery;
        bool isActive;

    public:
        Robot (std::string n, bool b, int c){
            name =n;
            isActive =b;
            battery = c;
        }
        void charge(int cc)
        {
            int charge_target = battery+cc;
            while(battery<charge_target)
            {
                battery=battery+1;
                cout<<battery<<endl;;
            }
        }
        int status(){
            if (battery>20 && isActive==true)
            {
                cout<< " Robot " << name << " is Ready to roll" << endl;
                return 1;
            }
            else{
                cout<< " Robot " << name << " is not Ready to roll" << endl;
                return 0;

            }
        }

};
int main()
{
Robot r("dobo", true, 5);

r.charge(25);
r.status();

return 0;
}