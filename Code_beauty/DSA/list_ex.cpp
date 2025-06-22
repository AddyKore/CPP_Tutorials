#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> listint = {1,2,3,4,5,6};

    for(int i : listint)
    {
        cout << i << endl;
    }


}