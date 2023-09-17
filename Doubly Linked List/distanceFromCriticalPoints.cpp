/* A critical point in a LL is defined as either a local minima or local maxima. given a LL tail, 
return an array of length 2 containing [minDistance, maxDistance] where 
minDistance is the minimum distance b/w any two distinct critical points and
maxDistance is the maximum distance b/w any two critical points.
if there are fewer than two critical points, return [-1,-1]

NOTE :- a node can only be a local maxima/minima if there exists both a previous node and a next node
*/
#include <iostream>
#include <vector>
#include <algorithm>
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

class DoublyLinkedList
{
    public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
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

bool isCriticalPoint(Node* &curr)
{
    if(curr->prev->val < curr->val && curr->next->val < curr->val)
    {
        return true;         // local maxima
    }
    if(curr->next->val > curr->val && curr->prev->val > curr->val)
    {
        return true;         //local minima
    }
    //if neither the case then return false
    return false;
}

std::vector<int> distancebwCriticalPoints(Node *head, Node *tail)
{
    std::vector<int> ans(2, INT_MAX);
    int firstCP = -1, lastCP = -1;

    Node *curr = tail->prev;
    if(curr == NULL)
    {
        ans[0] = ans[1] = -1;
        return ans;
    }
    int currPos = 0;
    while(curr != head)              //while(curr->prev != NULL)
    {
        if(isCriticalPoint(curr))
        {
            if(firstCP == -1)     //1st CP is not found yet
            {
                firstCP = lastCP = currPos;
            }
            else
            {
                ans[0] = std::min(ans[0], currPos - lastCP);  //minDistance
                ans[1] = currPos - firstCP;                   //maxDistance
                lastCP = currPos;
            }
        }
        currPos++;
        curr = curr->prev;
    }
    if(ans[0] == INT_MAX)         //we have not found a single critical point
    {
        ans[0] = ans[1] = -1;
    }
    return ans;
}

int main()
{
    DoublyLinkedList dll;
    dll.insertatEnd(1);
    dll.insertatEnd(9);
    dll.insertatEnd(5);
    dll.insertatEnd(6);
    dll.insertatEnd(2);
    dll.display();
    std::vector<int> ans = distancebwCriticalPoints(dll.head, dll.tail);
    std::cout<<ans[0]<<" "<<ans[1]<<std::endl;
    return 0;
}