/*
print this pattern
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

#include <iostream>

void printPattern(int n){
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i; //number of stars in each row is equal to row initially until it reached its breakpoint which is n/2
        if(i > n){
            stars = 2 * n - i;      //after the i crosses the n, number of stars in each row will be -> 2(n)-i, e.g. 2(5) - 6 = 4
        }
        // stars
        for (int j = 1; j <= stars;j++){
            std::cout << "*";
        }
        //space
        for (int j=1; j <=space; j++){
            std::cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        if(i < n)
            space -= 2;     // i=2, n= 5, then space decreases
        else
            space += 2;     // i = 6, n = 5, then space increases
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