//WAP to find the last occurence of an element in a given array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for(int i =0; i<6;i++)
    {
        cout<<"Enter elements into vector v -";
        cin>>v[i];
    }

    int x;
    cout<<"Enter x: ";
    cin>>x;

    int occurence = -1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occurence = i;
        }
    }
    cout <<"The last occurence of the element is at index: "<<occurence<<endl;
    return 0;

}