/*
print this
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/
#include <iostream>

void printPattern(int n){
    for (int i = 0; i < n;i++){
        //for spaces
        for (int j = 0; j < n - i - 1; j++){
            std::cout << " ";
        }
        // for characters
        char c = 'A';
        int breakpoint = (2 * i + 1) / 2;       //if i = 2, then breakpoint for A B C B A is 5/2 which is like half of this. at C
        for (int j = 1; j <= (2 * i + 1); j++){ //the inner loop starts at 0 and goes till 2i + 1 times as it is the num of chars for each line
            std::cout << c;
            if(j <= breakpoint){
                c++;                // sequence A B C 
            }
            else
                c--;                // from C, print reverse as B A so as to complete the A B C B A
        }
        //for spaces
        for (int j = 0; j < n - i - 1; j++){
            std::cout << " ";
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