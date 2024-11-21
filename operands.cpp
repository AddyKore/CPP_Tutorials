#include <iostream>

int main()
{
    double n = 5;
    n+=1;
    std::cout << n << std::endl;
    n++;
    std::cout << n << std::endl;

    n*=2;
    std::cout << n<< std::endl ;
    
    int u = 5;
    double m = u/2;
    std::cout << m << std::endl;

    double y = 5;
    double b = y/2;
    std::cout << b << std::endl; // all invoved variables need to be floats to have it come out as a float

    // so we convert the datatype
    double mm = (double)u/2;
    std::cout << mm << std::endl;


    return 0;
}