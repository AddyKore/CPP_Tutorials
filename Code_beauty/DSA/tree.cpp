#include <iostream>

using namespace std;


struct Node{
    int val;
    Node* left;
    Node* right;
};

Node* create_node(int val)
{
    Node* node = new Node();
    node->val=val;
    node->left=node->right=nullptr;

}
int main()
{
    Node* root = new Node();

    //root node
    root = create_node(10);

    //level 1
    root->right = create_node(15);
    root->left = create_node(5);

    //level 2
    root->right->left = create_node(7);
    root->right->right = create_node(17);

    root->left->left = create_node(2);
    root->left->right = create_node(8);


    //level 3
    root->right->left->left = create_node(6);
    root->left->left->right = create_node(8);




}