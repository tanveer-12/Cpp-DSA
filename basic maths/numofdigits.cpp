/*
Given the number 'n'. find out and return the number of digits in the number
*/

#include <iostream>

int count(int n){
    int cnt = 0;
    while(n > 0){
        int lastdigit = n % 10;
        cnt += 1;
        n = n / 10;
    }
    return cnt;
}

// Another way is
int count2(int n){
    int cnt = int(log10(n) + 1);
    return cnt;
}

int main(){
    int testcases;
    std::cout << "How many test cases for : ";
    std::cin >> testcases;
    for (int i = 0; i < testcases; i++){
        int num;
        std::cout << "Enter the number: ";
        std::cin >> num;
        std::cout <<"using while loop: "<< count(num)<<std::endl;
        std::cout << "using logarithm: " << count2(num) << std::endl;
    }
}