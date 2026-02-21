#include <iostream>
#include <vector>
using namespace std;

float vec_avg(const vector<int>& v)   //pass by reference is the best practice, sice vectors can be huge and you do not want to specd time copying all that into a new variable. Make it constant to protect it
{
    int sum=0;
    float avg=0;
    for( int value : v )
    {
        sum = value+sum;
    }
    avg = sum/v.size();
    return avg;
}

std::tuple<int, int> min_max(const vector<int>& v)
{
    int min = v.at(0);  // .at is used to get valiues at any index and since you do not know the last index in here, .at throws back an error if you have requested  an index past the last index
    cout << " v.at(0)" << min << endl;
    int max = 0;

    for( int value : v )
    {
        if (value<min)
        {
            min = value;
        }
        if (value>max)
        {
            max=value;
        }
        
    }
    cout << min << endl;
    return {max,min};  // Use tuple top send more than one value
    

}

int main()
{
    vector<int> v;    //datatype of input value specified in <>

    cout<< " enter Sensor values, enter -1 to finish entries" << endl;
    int input;

    do{
        cin>>input;
        v.push_back(input);   // push_back is used for adding elements

    }while(input!=-1);

    v.pop_back();     //removing the -1 from the vector since that is not a legit value.

    cout << "the avg of the sensor values is " << vec_avg(v) << endl;
    auto [max,min] = min_max(v);
    cout << "the min of the sensor values is : " << min << " and the max values is " << max<< endl;


       
}