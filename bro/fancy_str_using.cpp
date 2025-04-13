#include <iostream>

int main()
{
    std::string full_name;
    std::cout << " Lets try again, give me your full name" << std::endl;
    std::getline(std::cin >> std::ws,full_name);
    if(!full_name.empty()){
    std::cout << "name lenght " << full_name.length() <<  std::endl;
    }
    else{
    std::cout << "name is empty "  <<  std::endl;
    }

    std::cout << "hello "  << "sir "+full_name<< std::endl;
    std::cout << "hello "  << full_name.append(" Sir ") << std::endl;

    std::cout << "Initial "  << full_name.at(0) << std::endl;

    //std::cout << "wow u are "  << full_name.insert(-1, "!") << std::endl;

    std::string mid_name;
    std::cout << " tell  me mid name" << std::endl;
    std::cin >> mid_name;

    int space = full_name.find(" ");
    full_name= full_name.insert(space, " "+mid_name);
    std::cout << "wow u are "  << full_name.insert(full_name.length(), "!") << std::endl;

    full_name.erase(0,3);
    std::cout << "wow u are "  << full_name.insert(full_name.length(), "!") << std::endl;

    full_name.clear();
    std::cout << "wow u are "  << full_name.insert(full_name.length(), "!") << std::endl;







    




    return 0;
}