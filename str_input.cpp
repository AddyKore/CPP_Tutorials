#include <iostream>

int main()
{

    std::cout << "enter full name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << name << " HMMM " << std::endl;
    std::cout << " that does not look like your full name" << std::endl;

    std::string full_name;
    std::cout << " Lets try again, give me your full name" << std::endl;
    std::getline(std::cin, full_name);
    //see output
    std::cout <<  "wow, code jumped so this to avoid thhat" << '\n';

    std::getline(std::cin >> std::ws, full_name);

    std::cout << "aaaah so " << full_name << " is your full namme " << std::endl;

    return 0;
}