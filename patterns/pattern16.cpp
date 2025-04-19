/*
print this
A
B B 
C C C 
D D D D 
E E E E E
*/
#include <iostream>

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            std::cout << c;
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