#include <iostream>
#include <array>

using namespace std;

int main()
{
    //Declare

    myarray.fill(10);  //it creates an array having all values as 10.

    //inirialization
    std::array<int, 5> myarray = {1,2,3,4,5};  //initializer list
    std::array<int, 5> myarray2 {1,2,3,4,5};   //uniform initialization

    //assign using intializer list
    std::array<int, 5> myarray;
    myarray = {1,2,3,4,5};

    return 0;
}
