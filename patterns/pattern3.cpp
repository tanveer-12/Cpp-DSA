/*
print this pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <iostream>

void printPattern(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}
// Alternate solution
// void printPattern(int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j <= i; j++){
//             std::cout << j + 1;
//         }
//         std::cout << std::endl;
//     }
// }

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