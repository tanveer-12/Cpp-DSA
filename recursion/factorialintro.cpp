//recursion introduction with factorial

#include <iostream>

int f(int n);

int main()
{
    int n;
    std::cout<<"Enter the number for factorial: ";
    std::cin>>n;
    int result = f(n);
    std::cout<<"Factorial of "<<n<<" is "<<f(n)<<std::endl;
    return 0;
}

int f(int n)
{
    //base case
    if(n == 1)
    {
        return 1;
    }
    int ans = n * f(n - 1);
    return ans;
}