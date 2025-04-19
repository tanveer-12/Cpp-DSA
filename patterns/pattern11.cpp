/*
print this
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <iostream>

void printPattern(int n){
    int start = 1;
    for (int i = 0; i < n; i++){
        if(i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            std::cout << start<<" ";
            start = 1 - start;  //so that itt flips the 0s and 1s. if start is 1, then next num should be 0 acc to start = 1 - 1 => 0
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