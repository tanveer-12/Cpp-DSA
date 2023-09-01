//given an integer, find out the sum of its digit using recursion

#include <iostream>

int f(int n);

int main()
{
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    int ans = f(n);
    std::cout<<"Sum of digits of the number "<<n<< " is: "<<f(n)<<std::endl;
    return 0;
}

int f(int n)    
{
    //base case
    if(n>=0 and n <= 9)
    {
        return n;
    }
    int result = f(n / 10) + f(n % 10);
    return result;
}