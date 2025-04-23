/*
Check if the given number is palindrome or not. Return true if it is 
*/

#include <iostream>

bool checkPalindrome(int n){
    int original = n;
    int reverseN = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverseN = (reverseN * 10) + lastdigit;
        n = n / 10;
    }
    if(reverseN == original){
        return true;
    }
    else
        return false;
}

int main(){
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;
    bool ans = checkPalindrome(num);
    if (ans == 1)
    {
        std::cout << "True";
    }
    else{
        std::cout << "False";
    }
}