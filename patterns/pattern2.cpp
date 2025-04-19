/*
print this pattern
*
* *
* * *
* * * *
* * * * *

for competitiv programming, you will be asking for inputs 
and making functions 
*/
#include <iostream>

void printPattern(int n){
    for (int i = 0; i < n; i ++){
        for (int j = 0; j <= i; j++){
            std::cout << "* ";
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