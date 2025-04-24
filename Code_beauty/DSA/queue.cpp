#include <iostream>
#include <stack>
using namespace std;

   
void show_stack( stack<int> n_stack )
{
    while( !n_stack.empty())
    {
        cout << n_stack.top() << endl;
        n_stack.pop();
        cout << "New size of stack is : " << n_stack.size() << endl;
    }
}
int main()
{

    stack<int> num_stack;

    num_stack.push(4);
    num_stack.push(3);
    num_stack.push(2);
    num_stack.push(1);

    show_stack(num_stack);


}