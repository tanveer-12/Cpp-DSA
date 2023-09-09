//remove the cycle in a Linked list if there exists a cycle
// cycleinLL.cpp is its starting program where we detect if there is a cycle in LL
//Given head, head of a LL, determine if the LL has a cycle in it
// we will use slow and fast pointers, if at any moment they point to the same node other than null, 
// that means there exists a cycle in LL

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
class LinkedList
{
    public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertatEnd(int val)
    {
        Node *new_node = new Node(val);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<"->";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
};

bool detectCycle(Node *head)
{
    if(head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            std::cout<<slow->val<<std::endl;
            return true;
        }
    }
    return false;
}

void removeCycle(Node* &head)  //assuming that the LL has a cycle in it
{
    Node *slow = head;
    Node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;    //until slow and fast become equal keep on going
    }
    while(slow != fast);  //the time this loop ends, slow and fast points to same node

    fast = head;    // u can also use slow to point to head (any pointer we can use)
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;   //move both pointers by 1 step until their next points to same node
    }
    slow->next = NULL;   //remove the access to the element so that cycle is removed
}

int main()
{
    LinkedList l1;
    l1.insertatEnd(1);
    l1.insertatEnd(2);
    l1.insertatEnd(3);
    l1.insertatEnd(4);
    l1.insertatEnd(5);
    l1.insertatEnd(6);
    l1.insertatEnd(7);
    l1.display();
    l1.head->next->next->next->next->next->next->next = l1.head->next->next;   //7->next points to 3
    std::cout<<detectCycle(l1.head)<<std::endl;  //check if there is cycle
    removeCycle(l1.head);
    std::cout<<"After removing cycle: "<<std::endl;
    std::cout<<detectCycle(l1.head)<<std::endl;    //after removing this should come out to be 0
    l1.display();
    return 0;
}