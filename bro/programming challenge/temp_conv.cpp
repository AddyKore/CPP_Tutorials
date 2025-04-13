#include <iostream>

int main(){
    
    int t;
    char index1,index2;
    std::cout << " enter temp number " << std::endl;
    std::cin >> t;
    std::cout << " enter temp unit is in (c or f) " << std::endl;
    std::cin >> index1;
    std::cout << " enter temp unit convert to (c or f)" << std::endl;
    std::cin >> index2;

    if(index1 == 'c' || index1 == 'C'){
        if(index2 == 'c' || index2 == 'C'){
            std::cout  << t << " Temp stays the same at " << t  << std::endl;}
        else if (index2 == 'f' || index2 == 'F'){
            std::cout  << t << " Temp changes to " << (1.8 * t) +32 << std::endl;}
        else{
            std::cout  << "temp indexes were wrong somewhere" << std::endl;
        }
    }
    else if(index1 == 'f' || index1 == 'F'){
        if(index2 == 'f' || index2 == 'F'){
            std::cout  << t << " Temp stays the same at " << t  << std::endl;}
        else if (index2 == 'c' || index2 == 'C'){
            std::cout  << t << " Temp changes to " << (t -32)/1.8 << std::endl;}
        else{
            std::cout  << "temp indexes were wrong somewhere" << std::endl;
        }
    }
    else{
        std::cout  <<" Entor correct unit " << std::endl;

    }
    
    return 0;
}