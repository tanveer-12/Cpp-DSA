/*
print this
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/

#include <iostream>

void printPattern(int n){
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++){
        //for number -> 1 2 3
        for (int j = 1; j <= i; j++){
            std::cout << j;
        }
        //for space
        for (int j = 1; j <= space; j++){
            std::cout << " ";
        }
        //for numbers -> 3 2 1
        for (int j = i; j >= 1; j--){
            std::cout << j;
        }
        std::cout << std::endl;
        space = space - 2; //reducing the space by 2 after every line
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