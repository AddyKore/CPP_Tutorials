#include <iostream>

namespace first{
    int x = 5;
}

namespace second{
    int x=6;
}

int main()
{
    /*
    int x=0 // If I keep this all x without namespace prefix will point to this local x
    
    */
    using namespace first;
    std::cout  << "x = " << x << std::endl;
    std::cout  << " but also x = " << second::x << std::endl;

    using namespace std;
    string st = " I also do not need std:: before string datatype";
    cout << " I can now print without std:: " << st << endl;

    return 0;
}