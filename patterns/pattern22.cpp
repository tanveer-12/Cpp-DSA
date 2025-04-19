/*
print this pattern
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4 
4 3 2 1 2 3 4
4 3 2 2 2 3 4 
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

/*
we change this 2d matrix to a new one by following n - value aapproach, here our n = 4, and our value is the matrix, we get our new matrix
            4 4 4 4 4 4 4           0 0 0 0 0 0 0 
            4 3 3 3 3 3 4           0 1 1 1 1 1 0
            4 3 2 2 2 3 4           0 1 2 2 2 1 0
4     -     4 3 2 1 2 3 4   =       0 1 2 3 2 1 0
            4 3 2 2 2 3 4           0 1 2 2 2 1 0
            4 3 3 3 3 3 4           0 1 1 1 1 1 0
            4 4 4 4 4 4 4           0 0 0 0 0 0 0                  
*/

#include <iostream>

void printPattern(int n){
    // the outer loop runs 2n-1 times
    for (int i = 0; i < 2*n - 1; i++){
        //our inner loop (columns) also runs 2n-1 times
        for (int j = 0; j < 2 * n - 1; j++){
            /*
            The values inside the matrix are really the shortest distance from the i and j from all directions. 
            like for value at point(2,2), its value is 2 because, from all four directions we decide its minimum distance and that is its value
            from top - (seeing i,i.e row) its distance is 2 (from 0 till i = 2) till this point
            from left - (seeing j,i.e column) its distance is 2 (from 0) till this point
            from right - (seeing from j, but from last index which is 2n-1, so its value is) -> (2n - 1) - 1 - j which is 2(4) - 1 - 1 - 2 = 4 
            from bottom - (seeeing from i, but from last index which is 2n-1, so its value is) -> (2n - 1) - 1 - i which is 2(4) - 1 - 1 - 2 = 4
            so ultimately we are considering its shortest distance which is 2 and that is its value
            */
            int top = i;
            int left = j;
            int right = (2 * n - 1) - 1 - j;
            int bottom = (2 * n - 1) - 1 - i;
            std::cout << (n - std::min(std::min(top, bottom), std::min(left, right)));
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