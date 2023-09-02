//second and more optimized approach to the problem of powerPQrecursive.cpp
//given two numbers p and q, find the value of p^q using recursive function

#include <iostream>

int f(int p, int q);

int main()
{
    int p,q;
    std::cout<<"Enter p and q: ";
    std::cin>>p>>q;
    int result = f(p,q);
    std::cout<<"Value of "<<p<<" ^ "<<q<<" is: "<<result<<std::endl;
    return 0;
}

int f(int p, int q)
{
    //base case
    if(q == 0)
    {
        return 1;
    }
    if(q % 2 == 0) //if q is even
    {
        int ans = f(p,q/2);
        return ans * ans;
    }
    else   //if q is odd
    {
        int ans = f(p, (q-1)/2);
        return p * ans * ans;
    }
}