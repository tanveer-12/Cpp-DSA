/*
print this 
A B C D E
A B C D
A B C
A B
A
*/

#include <iostream>

void printPattern(int n){
    for (int i = 0; i < n; i++){
        for (char c = 'A'; c <= 'A' + (n - i - 1); c++)
        {
            std::cout << c<<" ";
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