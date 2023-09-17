/* Given the head of a DLL, the values of the LL are sorted in non-decreasing order 
(i.e. increasing order). Find if there exists a pair of distinct nodes such that the sum of their values
is x. Return the pair in the form of a vector[l,r] where l and r are the values stored in 2 nodes pointed
by the pointers. if there are multiple such pairs, return any of them. if there is no such pair, return
[-1,-1]
*/

#include <iostream>
#include <vector>
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class DOublyLinkedList
{
    public:
    Node *head;
    Node *tail;

    DOublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertatEnd(int val)
    {
        Node *new_node = new Node(val);
        if(tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
        return;
    }

    void display()  
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<" ";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
};

std::vector<int> pairSumDLL(Node *head, Node *tail, int x)
{
    std::vector<int> ans(2, -1);
    while( head != tail)
    {
        int sum = head->val + tail->val;
        if(sum == x)
        {
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }

        if(sum > x)     //i need smaller values, so move tail backwards
        {
            tail = tail->prev;
        } 
        else            // i need larger values, so move head forwards
        {   
            head = head->next;
        }
    }
    return ans;
}

int main()
{
    DOublyLinkedList dll;
    dll.insertatEnd(2);
    dll.insertatEnd(5);
    dll.insertatEnd(6);
    dll.insertatEnd(8);
    dll.insertatEnd(10);
    dll.display();
    std::vector<int> ans = pairSumDLL(dll.head, dll.tail, 11);
    std::cout<<"Ans vector is: ["<<ans[0]<<" "<<ans[1]<<"]"<<std::endl;
    return 0;
}