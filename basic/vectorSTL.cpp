#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity of this vector: "<<v.capacity()<<endl;

    //initializing vector to have size 5 and initialize by 1
    vector<int> v1(5,1); //size=5, all elements=1
    cout<<"print v1"<<endl;
    for(int i:v1)
    {
       cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(1); //entering an element into vector
    cout<<"Capacity of this vector: "<<v.capacity()<<endl;

    v.push_back(2); //entering 2 elements
    cout<<"Capacity of this vector: "<<v.capacity()<<endl;

    v.push_back(3); //entering 3 elements
    cout<<"Capacity of this vector: "<<v.capacity()<<endl; //capacity is how much memory is allocated to this vector
    cout<<"Size of this vector: "<<v.size()<<endl; //size is how many elements are there in the vector

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); //removes the last element

    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Vector size before clear"<<endl;
    cout<<v.size()<<endl;
    v.clear(); //clears the vector
    cout<<"Vector size after clear"<<endl;
    cout<<v.size()<<endl;

    

}