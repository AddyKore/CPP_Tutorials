#include <iostream>
int main()
{
    const double PI = 3.145;
    int radius = 2;
    float circumference = 2*radius*PI;

    std::cout << "circumference = " << circumference << std::endl ;
    return 0;
}