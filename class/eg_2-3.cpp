/* n Example 1-12 (in Chapter 1), we designed a class to implement a person’s name in a
program. Here we extend the definition of the class personType to individually set a
person’s first name and last name, and then return the entire object. The extended
definition of the class personType is as follows: */

#include <iostream>
#include <string>

class personType
{
    public:
    void print() const;
    void setName(std::string first, std::string last);
    personType& setFirstName(std::string first);
    personType& setLastName(std::string last);
    std::string getFirstName() const;
    std::string getLastName() const;
    personType(std::string first="", std::string last="");

    private:
    std::string firstName;
    std::string lastName;
};

personType& personType::setLastName(std::string last)
{
    lastName = last;
    return *this;
}

personType& personType::setFirstName(std::string first)
{
    firstName = first;
    return *this;
}

void personType::print() const
{
    std::cout<< firstName << " " << lastName;
}

void personType::setName(std::string first, std::string last)
{
    firstName = first;
    lastName = last;
}

std::string personType::getFirstName() const
{
    return firstName;
}

std::string personType::getLastName() const
{
    return lastName;
}


//Constructor with parameters
personType::personType(std::string first, std::string last)
{
    firstName = first;
    lastName = last;
}

int main()
{
    personType student1("Liss", "Smith");
    personType student2;
    personType student3;

    std::cout<<"Line 10 -- Student 1: ";
    student1.print();
    std::cout<<std::endl;

    student2.setFirstName("Shelly");
    student2.setLastName("Malik");

    std::cout<<"line 14 -- Student 2: ";
    student2.print();
    std::cout<< std::endl;

    student3.setFirstName("Cindy");

    std::cout<<"line 18 -- Student 3: ";
    student3.print();
    std::cout<<std::endl;

    student3.setLastName("Tomek");
    std::cout<<"Line 22 -- Student 3: ";
    student3.print();
    std::cout<<std::endl;

    return 0;
}