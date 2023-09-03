//basic introduction to linked list listnode

#include <iostream>

class Node
{
    public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

int main()
{
    Node *n = new Node(1);
    std::cout<<n->val<<" "<<n->next<<std::endl;
    return 0;
}
