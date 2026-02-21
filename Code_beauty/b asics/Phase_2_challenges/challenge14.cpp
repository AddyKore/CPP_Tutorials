#include <iostream>
using namespace std;
int main()
{
    //integer
    int x = 10;

    // Now x is stored on the disk, where is it, lets say
    // it is in cell ytg86ndu6in387fdkj

    //ok but how do you find it out ???

    // you add & in front of the variable name and it throws the address for X back

    cout << "X`s address is " << &x << endl;

    // now where and how do you store this address??
    // we store everything in variables, even address of other variable!! jajajajaja

    // and all variables need a datatype, so what is a pointer`s data type????
    // it is what ever datatype is saved in the variable in question + *

    int* pointer = &x;

    cout << pointer<< " this is pointer of x"<<endl;


    //Now how do we print out a variable form its cell if we know its cell address???

    cout << "variable storred at address " << pointer << " is " << *pointer << endl;

    //If you wanna change stuff using piointer

    *pointer = 25;

    /*
    
    
    const int* p;   // pointer to const int (value can't change)
    int* const p;   // const pointer to dynamic int (address can't change)
    const int* const p; // both are const


*/

}