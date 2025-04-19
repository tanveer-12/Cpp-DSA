/*
print this pattern
E
D E 
C D E
B C D E
A B C D E
*/

#include <iostream>
void printPattern(int n){
    for (int i = 0; i < n;i++){
        for (char c = 'E' - i; c <= 'E';c++){   //starts from 'E' - i, and goes till E
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