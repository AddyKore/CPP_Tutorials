#include <iostream>
#include <cmath>

int main(){
    
    double a,b,c;
    std::cout << " enter both sides of triagle other thann hypotenuse  " << std::endl;
    std::cin >> a;
    std::cin >> b;
    c = sqrt( pow(a,2) + pow(b,2));
    std::cout  << " c = " << c << std::endl;
    return 0;
}