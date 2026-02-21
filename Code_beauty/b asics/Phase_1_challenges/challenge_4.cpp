#include <iostream>

int main()
{
    int a,b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin>>a;
    std::cin>>b;

    int sum = a+b;
    int diff = a-b;
    int prod = a*b;
    float qu = a/b;

    std::cout<< "sum= " << sum << std::endl;
    std::cout<< "diff= " << diff << std::endl;
    std::cout<< "prod= " << prod << std::endl;
    std::cout<< "qu= " << qu << std::endl;


}