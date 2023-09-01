//program to find nth fibonacci number
#include <iostream>

int fib(int n);

int main()
{
    int n;
    std::cout<<"Enter n for fibonacci number: ";
    std::cin>>n;
    int result = fib(n);
    std::cout<<n<<"th Fibonacci number is: "<<fib(n);
    return 0;
}

int fib(int n)
{
    //base case
    if(n == 0 || n == 1)
    {
        return n;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}