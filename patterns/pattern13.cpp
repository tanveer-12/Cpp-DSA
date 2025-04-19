/*
print this pattern
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15
*/

#include <iostream>

void printPattern(int n){
    int num = 1; // as numbers start from 1
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i;j++){
            std::cout << num<<" ";
            num += 1;
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