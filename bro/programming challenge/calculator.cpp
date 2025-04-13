#include <iostream>

int main(){
    
    int n;
    std::cout << " enter any number " << std::endl;
    std::cin >> n;
    if(n%2==0){
        std::cout  << n << " is a even number " << std::endl;
    }
    else{
        std::cout  << n << " is not a even number " << std::endl;

    }
    
    return 0;
}