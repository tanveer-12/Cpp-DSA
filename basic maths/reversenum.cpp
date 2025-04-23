/*
WAP to generate the reversee of a given number N. Print the corresponding reverse number
If number has trailling zeros, then its reverse will not be included , example: reverse of 10400 will be 401 instead of 00401
*/

#include <iostream>

int main(){
    int num, reverseN = 0;
    std::cout << "Enter the number you want to reverse: ";
    std::cin >> num;
    while (num > 0){
        int lastdigit = num % 10;
        reverseN = (reverseN * 10) + lastdigit;
        num = num / 10;
    }
    std::cout <<"The reversed number is: "<< reverseN;
}