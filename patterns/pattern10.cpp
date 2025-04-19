/*
print this pattern
*
* * 
* * *
* * * *
* * * * *
* * * *
* * * 
* *
*
*/

#include <iostream>

void printPattern(int n){
    for (int i = 1; i <= 2*n-1; i++){
        int stars = i;
        if(i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main(){
    int testcasestimes;
    std::cout << "Enter the times you want to run this for: ";
    std::cin >> testcasestimes;
    for (int i = 0; i < testcasestimes; i++){
        int n;
        std::cout << "Enter the pattern rows: ";
        std::cin >> n;
        printPattern(n);
    }
}