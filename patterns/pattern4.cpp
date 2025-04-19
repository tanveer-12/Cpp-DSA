/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 
*/

#include <iostream>

void printPattern(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            std::cout << i << " ";
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