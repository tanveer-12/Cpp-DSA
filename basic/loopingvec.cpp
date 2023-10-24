#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0; i<5; i++)
    {
        int element;
        cout<<"Enter elements : ";
        cin >>element ;
        v.push_back(element);
    }

    for(int i=0 ; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //FOR EACH Loop
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //While Loop
    int idx = 0;
    while(idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
    
    return 0;
}