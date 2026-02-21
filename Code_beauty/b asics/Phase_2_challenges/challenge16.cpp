#include <iostream>
using namespace std;

class Robot{
    private:
        std::string name;
        int battery;
        bool isActive;

    public:
        void set_name(std::string n){
            name =n;
        }
        void setisActive(bool b){
            isActive =b;
        }
        void set_charge(int c){
            battery = c;
        }
        void charge(int cc)
        {
            while(battery<cc)
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
Robot r;

r.set_charge(5);
r.set_name("dobo");
r.setisActive(true);
r.charge(30);
r.status();

return 0;
}