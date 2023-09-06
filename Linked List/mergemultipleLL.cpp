// You are given an array of k-LinkedList lists, each LL is sorted in ascending order. Merge all the 
// linked lits into one singly sorted LL and return it
#include <iostream>
#include <vector>
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
        if (head == NULL)
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

Node* mergeLL(Node* &head1, Node* &head2)
{
    Node *dummyHeadnode = new Node(-1);

    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = dummyHeadnode;

    while(ptr1 && ptr2)
    {
        if(ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1 != NULL)
    {
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }

    return dummyHeadnode->next;
}

Node* mergeKLinkedLists(std::vector<Node*> &lists)
{
    if(lists.size() == 0)
    {
        return NULL;
    }

    while(lists.size() > 1)
    {
        Node *mergedHead = mergeLL(lists[0], lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}

int main()
{
    LinkedList L1;
    L1.insertatEnd(1);
    L1.insertatEnd(7);
    L1.insertatEnd(8);
    L1.display();

    LinkedList L2;
    L2.insertatEnd(2);
    L2.insertatEnd(4);
    L2.insertatEnd(5);
    L2.display();

    LinkedList L3;
    L3.insertatEnd(3);
    L3.insertatEnd(6);
    L3.display();

    std::vector<Node*> lists;
    lists.push_back(L1.head);
    lists.push_back(L2.head);
    lists.push_back(L3.head);

    LinkedList mergedFinalList;
    mergedFinalList.head = mergeKLinkedLists(lists);
    mergedFinalList.display();
    return 0;
}