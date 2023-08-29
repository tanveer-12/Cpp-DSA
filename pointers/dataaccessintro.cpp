//accessing data through pointers using deferencing operator (*)
#include <iostream>
int main()
{
    int x = 9;
    float y = 9.8;

    int *ptr = &x;
    std::cout<<"Address stored inside ptr: "<<ptr<<"\n";
    std::cout<<"Value present at the address pointed by ptr: "<<*ptr<<"\n";

    float *ptrf = &y;
    std::cout<<"Address stored inside ptrf: "<<ptrf<<"\n";
    std::cout<<"Value present at the address pointed by ptrf: "<<*ptrf<<std::endl;

    //updating x with pointer
    *ptr = 50;
    std::cout<<"New value of x: "<<x<<std::endl;
    std::cout<<"New value pointed by ptr: "<<*ptr<<std::endl;

    return 0;
}