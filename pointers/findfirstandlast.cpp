//wap to find the first and last occurence of a character in a given string using pointers
// call by reference method
#include <iostream>
#include <string>

void checkfirstlast(std::string s, char ch, int *first, int *last );

int main()
{
    std::string s = "aaabac";
    char ch = 'a';

    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;
    checkfirstlast(s, ch, pf, pl);

    std::cout<<*pf<<" "<<*pl<<"\n";
    std::cout<<first<<" "<<last<<std::endl;

    return 0;
}

void checkfirstlast(std::string s, char ch, int *first, int *last )
{
    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == ch)
        {
            *first = i;
            break;
        }
    }

    for(int i = s.size() - 1; i >=0; i--)
    {
        if(s[i] == ch)
        {
            *last = i;
            break;
        }
    }
}