#include <iostream>
#include "Sales_item.h"
// int main(){
//     std::cout<<"Enter two numbers: "<<std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
//     return 0;
// }

// int main(){
//     int sum = 0, val = 1;
//     while(val <= 10){
//         sum += val;
//         ++val;
//     }
//     std::cout << "Sum of 1 to 10 inclusive is : " << sum << std::endl;
//     //Exercise 1.4.1
//     // using while loop to sum the numbers from 50 to 100
//     int num = 50;
//     while(num <= 100){
//         sum += num;
//         num++;
//     }
//     std::cout << sum << std::endl;
//     // print the numbers from 10 to 0 using --
//     int ten = 10;
//     while(ten > 0){
//         std::cout << ten << std::endl;
//         ten--;
//     }
//     int summ = 0;
//     for (int i = -100; i <= 100; ++i){
//         summ += i;
//     }
//     std::cout << summ << std::endl;
//     return 0;
// }

int main()
{
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    //reead first number and ensure that we have data to process
    if(std::cin>> currVal) {
        int cnt = 1; // store the count for the current value we'r processing
        while(std::cin>> val){ //read the remaining numbers
            if(val == currVal){ // if the values are the same 
                ++cnt;          // add 1 to cnt
            }
            else{
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0; 
}

