#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;
    std::cout<< "Enter your name" <<std::endl;
    std::cin>>name;
    std::cout<< "Enter your age" <<std::endl;
    std::cin>>age;

    std::cout<< " Ok so you are " << name << " and you are " << age << "years old, correct" << std::endl;
    char input; 
    std::cin>>input;

    if(input == 'y')
    {
        std::cout << "great" << std::endl;
    }
    else{
        std::cout << " shit code" << std::endl;
    }

    return 0;

}