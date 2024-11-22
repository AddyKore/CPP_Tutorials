#include <iostream>

int main(){
    
    int n;
    std::cout << " enter any number " << std::endl;
    std::cin >> n;
    if(n%2){
        std::cout  << n << " is not a even number " << std::endl;
    }
    else{
        std::cout  << n << " is a even number " << std::endl;

    }
    
    // using turnary op
    std::cout  << "using ";
    std::cout << " ternary op " << '\n';
    n%2 == 1? std::cout  << n << " is a even number " << std::endl : std::cout  << n << " is not a even number " << std::endl;
    return 0; 
}