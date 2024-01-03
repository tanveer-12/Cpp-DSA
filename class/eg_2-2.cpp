//page 73 book
#include <iostream>

//copying example 1-12 here ||
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

//****inheritance concepts started *****//
class partTimeEmployee: public personType
{
    public:
    void print() const;
    double calculatePay() const;
    void setNameRateHours(std::string first, std::string last, double rate, double hours);
    partTimeEmployee(std::string first = "", std::string last = "", double rate =0, double hours = 0);

    private:
    double payRate;     
    double hoursWorked; //hours worked
};

void partTimeEmployee::print() const
{
    personType::print();
    std::cout<<"'s wages are: $"<<calculatePay<<std::endl;
}

double partTimeEmployee::calculatePay() const
{
    return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(std::string first, std::string last, double rate, double hours)
{
    personType::setName(first,last);
    payRate = rate;
    hoursWorked = hours;
}

//constructor
partTimeEmployee::partTimeEmployee(std::string first, std::string last, double rate, double hours):personType(first,last)
{
    payRate = rate;
    hoursWorked = hours;
}