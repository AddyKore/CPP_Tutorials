#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* privious;
};


void print_list(Node* nodeLL)
{
    while(nodeLL != NULL){        
        cout << "Node value : " << nodeLL->value << endl; 
        nodeLL = nodeLL->next;
    }
    cout << ": end : "<< endl;
}

void print_list_reverse(Node* nodeLL)
{
    while(nodeLL != NULL){        
        cout << "Node value : " << nodeLL->value << endl; 
        nodeLL = nodeLL->privious;
    }
    cout << ": end : "<< endl;
}
int main()
{

    Node* head = new Node();
    Node* tail = new Node();

    Node* node = new Node();
    
    // adidng first element and then making that heads and tail
    node->value = 1;
    node->next = NULL;
    node->next = NULL;
    head = node;
    tail = node;

    node = new Node() ; //resetting node coz hed and tail are the main
    node->value = 2;  // add value to new node
    node->privious = tail; // the new node is adding after the privious "tail " so thats its privious
    node->next = NULL; // does not have a new nxt

    tail->next = node; // what ever was the last tail is now before this so this is its next
    tail = node; // and now this is the tail so tail = this

    node = new Node() ; //resetting node coz hed and tail are the main
    node->value = 3;  // add value to new node
    node->privious = tail; // the new node is adding after the privious "tail " so thats its privious
    node->next = NULL; // does not have a new nxt

    tail->next = node; // what ever was the last tail is now before this so this is its next
    tail = node; // and now this is the tail so tail = this
    
    node = new Node() ; //resetting node coz hed and tail are the main
    node->value = 4;  // add value to new node
    node->privious = tail; // the new node is adding after the privious "tail " so thats its privious
    node->next = NULL; // does not have a new nxt

    tail->next = node; // what ever was the last tail is now before this so this is its next
    tail = node; // and now this is the tail so tail = this



    print_list(head);
    print_list_reverse(tail);

}