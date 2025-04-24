#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
};

void print_list(Node* nodeLL)
{
    while(nodeLL != NULL){        
        cout << "Node value : " << nodeLL->value << endl; 
        nodeLL = nodeLL->next;
    }
    cout << ": end : "<< endl;
}
void add_node_front(Node** start,  int value)
{
    Node* temp = new Node();

    temp->value=value;
    temp->next=*start;
    *start = temp;
}

void add_node_last(Node** start,  int value)
{
    // prep new node
    Node* new_one = new Node();
    new_one->value=value;
    new_one->next=NULL;

    //check if the list is empty
    if(*start == NULL){
        *start =new_one;
        return;
    }

    //if not find the last element

    Node* current_node = *start;
    while (current_node->next!=NULL){
        current_node = current_node->next;
    }

    // insert
    current_node->next = new_one;



    
}


void add_node_mid(Node** start,  int value, int pos)
{
    // prep new node
    Node* new_one = new Node();
    new_one->value=value;
    new_one->next=NULL;

    //check if the list is empty
    if(*start == NULL){
        *start =new_one;
        return;
    }

    //if not find the last element

    Node* current_node = *start;
    int n =0;
    while (pos!=n){
        current_node = current_node->next;
        n++;
    }

    // insert
    Node* temp = new Node();
    temp->next = current_node->next;
    current_node->next = new_one;
    new_one->next = temp->next;



    
}

/*
void add_node(Node* start, Node* new_node,  int position)
{
    position = position-1;

    if (position>=0)
    {
    int i=0;
    Node* current = start;
    while( i!=position){
        current = current->next;
        i++;
    }

    Node* temp =new Node();

    
    temp->next = current->next;

    current->next = new_node;
    new_node->next = temp->next;
    }

    else
    {

    Node* temp =new Node();

   
    temp->value = start->value;
    temp->next= start->next;

    start->value = new_node->value;
    start->next = new_node;
    
    new_node->value=temp->value;
    new_node->next=temp->next;
   }
    

    

}*/

int main()
{

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next= third;
    third->value=3;
    third->next=NULL;

    print_list(head);
    add_node_front(&head, 88); // so here we send the address of the pointer coz in the function we want to access and change the pointer, but if we only send the pointer then the pointer address change dont in the function will be for the location that is newly created by the accepted function.
    add_node_front(&head, 88);
    print_list(head);
    add_node_last(&head, 8);
    add_node_last(&head, 8);
    add_node_mid(&head, 8888888, 1);
    add_node_mid(&head, 7777788, 2);


    print_list(head);
}