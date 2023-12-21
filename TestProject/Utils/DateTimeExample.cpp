#include <iostream>
#include <ctime>
#include "DateTimeExample.h"

const int secInDay = 24 * 60 * 60;

int getDay(const std::tm* tmObj)
{
    return tmObj->tm_mday;
}

int getMonth(const std::tm* tmObj)
{
    return tmObj->tm_mon + 1;
}

int getYear(const std::tm* tmObj)
{
    return tmObj->tm_year + 1900;
}

unsigned int getTotalDays(const std::time_t* time)
{
    return static_cast<unsigned int>(*time) / secInDay; // divide total ammount of sec on ammount of sec in the day
}
