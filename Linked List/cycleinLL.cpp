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
            return true;
        }
    }
    return false;
}

/*   WHEN THERE is NO CYCLE, OUTPUT = 0
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
    std::cout<<detectCycle(l1.head)<<std::endl;
    return 0;
}
*/

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
    std::cout<<detectCycle(l1.head)<<std::endl;
    return 0;
}