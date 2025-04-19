/*
print this pattern
* * * *
*     *
*     *
* * * *
*/

//it is a sqaure so we are printing the pattern on its boundaries.
// when i=0 , goes till i = n-1, it should print stars
// when j=0 , goees till j=n-1, it should print stars since we are talking about boundaries
#include <iostream>

void printPattern(int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n; j++){
            if(i ==0||j==0||i==n-1||j==n-1){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
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