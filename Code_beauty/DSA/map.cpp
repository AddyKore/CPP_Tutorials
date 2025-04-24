#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{

    map<string, int> ages;
    ages.insert(pair<string,int>("aditya",25));
    ages.insert(pair<string,int>("dilipkumar",55));
    ages.insert(pair<string,int>("Jayashri",50));
    ages.insert(pair<string,int>("aishu",28));

    for ( auto pair: ages)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    cout << "Aditya`s ages : " << ages["aditya"] << endl;
    cout << " Family size : " << ages.size() << endl;
    
    // erase, clear()


}