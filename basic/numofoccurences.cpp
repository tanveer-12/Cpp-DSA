#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v(6);
    cout<<"Enter vector elements: ";
    for(int i=0; i<v.size();i++)
    {
        cin>>v[i];
    }

    cout<<"Enter element x: ";
    int x;
    cin>>x;

    int occurences = 0;
    for(int element :v)
    {
        if(element == x)
        {
            occurences++;
        }
    }
    cout<<"Number of times "<<x<<" occurs is: "<<occurences<<endl;
    return 0;
}