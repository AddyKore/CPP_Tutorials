#include <iostream>
#include <cmath>

int main(){

    double x=3;
    double y=5;
    double z;

    std::cout << std::max(x,y) << std::endl;
    std::cout << std::min(x,y) << std::endl;

    std::cout << "power " << pow(x,y) << std::endl;
    std::cout << "sqrt of 9 = " << sqrt(9) << std::endl;
    std::cout << "abs -9 = " << abs(-9) << std::endl;
    std::cout << "round 5.5 = " << round(5.5) << std::endl;
    std::cout << "ceil 5.5 = " << ceil(5.5) << std::endl;
    std::cout << "floor 5.5  = " << floor(5.5) << std::endl;

    //cplusplus.com/reference/math has more functions



    return 0;
}