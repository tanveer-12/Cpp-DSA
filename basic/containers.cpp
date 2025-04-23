#include <iostream>
#include <list>

//list
void explainList(){
    std::list<int> ls;      // {}
    ls.push_back(2);        // {2}
    ls.emplace_back(4);     // {2, 4}
    ls.push_front(5);       // {5, 2, 4}
    ls.emplace_front(6);    // {6,5,2,4}      
    std::cout << ls.front();
}

// deque
void explainDeque(){
    std::deque<int> dq;
    dq.push_back(2);
}

int main(){
    explainList();
}