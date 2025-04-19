/*
print this pattern
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
#include <iostream>

void printPattern(int n){
    int iniSpace = 0;
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 1; j <= n - i; j++){
            std::cout << "*";
        }
        //spaces
        for (int j = 0; j < iniSpace; j++){
            std::cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "*";
        }
        iniSpace += 2;
        std::cout << std::endl;
    }
    iniSpace = 2 * n - 2;
    for (int i = 1; i <= n; i++){
        // stars
        for (int j = 1; j <= i; j++){
            std::cout << "*";
        }
        // space
        for (int j = 0; j < iniSpace; j++){
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++){
            std::cout << "*";
        }
        iniSpace -= 2;
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