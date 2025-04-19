/* Printing this pattern 
* * * *
* * * *
* * * *
* * * *

following the fundamentals of printing the patterns
outer loop - for rows
inner loop - for columns

i) for outer loop, count the number of rows
ii) for inner loop, focus on the columns, and then connect them to rows somehow
iii) print whatever pattern inside the inner loop only
iv) observe symmetry (optional)
*/

#include <iostream>
/*
here we got 4 rows, and 4 stars printing in each row, so that's the connection 
between rows and columns
*/
int main() {
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}