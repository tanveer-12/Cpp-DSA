#include <string>
#include <iostream>
class personType
{
    public:
    void print() const;
    void setName(std::string first, std::string last);
    std::string getFirstName() const;
    std::string getLastname() const;
    personType();
    personType(std::string first, std::string last);

    private:
    std::string firstName;
    std::string lastName;
};

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

std::string personType::getLastname() const
{
    return lastName;
}

//Default Constructor
personType::personType()
{
    firstName = "";
    lastName = "";
}

//Constructor with parameters
personType::personType(std::string first, std::string last)
{
    firstName = first;
    lastName = last;
}

