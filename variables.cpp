#include <iostream>

int main()
{
    //int
    int x ; //declaration
    x = 5; //assignment
    int y= 3;

    int sum = x+y;
    std::cout << x << std::endl ;
    std::cout << y << std::endl ;
    std::cout << "Sum of " << x << " and " << y << " is " << sum << std::endl;

    //Double, float
    double fraction = 3.5;
    float frac_float = 3.444;

    std::cout << "fraction = " << fraction << std::endl; 
    std::cout << "fraction_float = " << frac_float << std::endl; 

    //char

    char grade = 'A';
    char curruncy = '$';
    std::cout << "Char out " << grade << std::endl;
    std::cout << "curruncy out " << curruncy << std::endl;

    //boolean
    bool light = true;
    std::cout << " is power on : " << light << std::endl;

    //string

    std::string name = "Aditya";
    std::cout << "my name is " << name <<std::endl;

    return 0;
}