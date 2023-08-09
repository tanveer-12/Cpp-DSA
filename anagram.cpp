#include <iostream>
#include <vector>
#include <algorithm>

bool Anagramis(const std::string& str1, const std::string& str2)
{
    if(str1.length() != str2.length())
    return false;

    std::vector<int> charcount(26,0); //vector of alphabets with initializing all its element to 0

    for(char ch : str1)
    {
        charcount[ch - 'a']++;
    }

    for(char ch : str2)
    {
        charcount[ch - 'a']--;
    }

    return std::all_of(charcount.begin(),charcount.end(),[](int count) {
        return count ==0;
    });
}

int main()
{
    std::string str1, str2;
    std::cout<<"Enter the first word: "<<std::endl;
    std::cin>>str1;
    std::cout<<"Enter the second number : "<<std::endl;
    std::cin>>str2;

    if(Anagramis(str1,str2))
    {
        std::cout<<"The two numbers are anagrams of each other.";
    }
    else{
        std::cout<<"The strings are not anagrams";
    }
    return 0;
}