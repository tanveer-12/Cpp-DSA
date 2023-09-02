//given two numbers p and q, find the value p^q using a recursive function

#include <iostream>

int f(int p, int q);

int main()
{
    int p, q;
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
    return p* f(p,q - 1);
}