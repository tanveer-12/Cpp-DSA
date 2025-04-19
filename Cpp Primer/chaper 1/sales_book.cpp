#include <iostream>
#include "Sales_item.h"

// int main() {
//     Sales_item item1, item2;
//     std::cin >> item1 >> item2; //read a pair of transactions
//     if(item1.isbn() == item2.isbn()){
//         std::cout << item1 + item2 << std::endl;
//         return 0; //indicate success
//     }
//     else {
//         std::cerr << "Data must refer to the same ISBN" << std::endl;
//         return - 1;  //indicate failure
//     }
// }

// 1.6 The bookstore program
int main(){
    Sales_item total;
    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "No data ?!" << std::endl;
        return -1;      //indicate failure
    }
    return 0;
}