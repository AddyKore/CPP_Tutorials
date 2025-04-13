#include <iostream>

int main()
{
    std::cout << " enter a month number " << std::endl;
    int month;
    std::cin >> month;
    
    switch(month){
        case 1:
            std::cout << " January " << std::endl;
            break;
        case 2:
            std::cout << " feb " << std::endl;
            break;
        case 3:
            std::cout << " march " << std::endl;
            break;
        case 4:
            std::cout << " april " << std::endl;
            break;
        case 5:
            std::cout << " may " << std::endl;
            break;
        case 6:
            std::cout << " June " << std::endl;
            break;
        default:
            std::cout << " beyond June " << std::endl;
            break;

    }

    std::cout << " enter a grade " << std::endl;
    char grade;
    std::cin >> grade;
    switch(grade){
        case 'A':
            std::cout << " 1 " << std::endl;
            break;
        case 'B':
            std::cout << " 2 " << std::endl;
            break;
        case 'C':
            std::cout << " 3 " << std::endl;
            break;
        case 'D':
            std::cout << " 4 " << std::endl;
            break;
        default:
            std::cout << " Failed " << std::endl;
            break;
    }

    return 0;
}