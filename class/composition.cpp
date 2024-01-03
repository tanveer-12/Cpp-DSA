/* Composition is another way to relate two classes. In composition, one or more members
of a class are objects of another class type. Composition is a ‘‘has-a’’ relationship; for
example, ‘‘every person has a date of birth.’’ */

/* First, we define another class, dateType, to store only a person’s date of birth, and then
construct the class personalInfoType from the classes personType and dateType.*/

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

class dateType
{
    public:
    void setDate(int month, int day, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    dateType(int month = 1, int day = 1, int year = 1900);

    private:
    int dMonth;     //store the month
    int dDay;       //store the day
    int dYear;      //stores the year
};

void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    std::cout<< dMonth << "-" <<dDay<<"-"<<dYear;
}

dateType::dateType(int month, int day, int year)
{
    setDate(month,day,year);
}

//***** class personalinfotype *****
class personalInfoType
{
    public:
    void setPersonalInfo(std::string first, std::string last, int month, int day, int year,int ID);
    void printPersonalInfo() const;
    personalInfoType(std::string first = "", std::string last = "", int month =1, int day =1, int year=1900, int ID = 0);

    private:
    personType name;
    dateType bDay;
    int personID;
};

void personalInfoType::setPersonalInfo(std::string first, std::string last, int month, int day, int year, int ID)
{
    name.setName(first,last);
    bDay.setDate(month,day,year);
    personID = ID;
}

void personalInfoType::printPersonalInfo() const
{
    name.print();
    std::cout<<"'s date of birth is ";
    bDay.printDate();
    std::cout<<std::endl;
    std::cout<<"and personal ID is "<<personID;
}

personalInfoType::personalInfoType(std::string first, std::string last,int month, int day, int year, int ID):name(first,last),bDay(month,day,year)
{
    personID = ID;
}