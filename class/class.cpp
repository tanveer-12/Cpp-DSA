#include <iostream>

class clockType
{
    public:
    void setTime(int hours, int minutes, int seconds);

    void getTime(int& hours, int& minutes, int& seconds);
    
    void printTime() const;

    void incrementSeconds();

    void incrementMinutes();

    void incrementHours();

    bool equalTime(const clockType& otherClock) const;

    clockType(int hours, int minutes, int seconds);

    clockType();

    private:
    int hr;     //stoes the hours
    int min;    //stores the minutes
    int sec;    //stores the seconds
};

void clockType::setTime(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
    hr = hours;
    else
    hr = 0;

    if(0 <= minutes && minutes < 60)
    min = minutes;
    else
    min = 0;

    if(0 <= seconds && seconds < 60)
    sec = seconds;
    else
    sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    if(hr < 10)
    std::cout << "0" << hr << ":";

    if(min < 10)
    std::cout << "0" << min << ":";

    if(sec < 10)
    std::cout << "0" << sec;
}

void clockType::incrementHours()
{
    hr++;
    if( hr > 23)
    hr = 0;
}

void clockType::incrementMinutes()
{
    min++;
    if(min > 59)
    {
        min = 0;
        incrementHours();   //increment hours
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if(sec > 59)
    {
        sec = 0;
        incrementMinutes(); //increment minutes
    }
}

bool clockType::equalTime(const clockType& otherClock) const
{
    return (hr == otherClock.hr
    && min == otherClock.min
    && sec == otherClock.sec);
}

clockType::clockType()  //default constructor
{
    hr = 0;
    min = 0;
    sec = 0;
}

clockType::clockType(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
    hr = hours;
    else 
    hr = 0;

    if(0 <= minutes && minutes < 60)
    min = minutes;
    else
    min = 0;

    if(0 <= seconds && seconds < 60)
    sec = seconds;
    else
    sec = 0;
}

int main()
{
 return 0;
}