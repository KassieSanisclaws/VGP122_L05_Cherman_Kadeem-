#include "Q1Date.h"
#include <iostream>

void Q1Date::Date(int m, int d, int y)
{
   setMonth(m);
   day = d;
   year = y;
}

void Q1Date::setMonth(int m)
{
   if (m >= 1 && m <= 12)
	  month = m;
   else
   {
	  std::cout << "Invalid month (" << m << ") set to 1\n";
	  month = 1; //Default to January if invalid month is provided by user.
   }
}

void Q1Date::setDay(int d)
{
   day = d;
}

void Q1Date::setYear(int y)
{
   year = y;
}

int Q1Date::getMonth() const
{
   return month;
}

int Q1Date::getDay() const
{
   return day;
}

int Q1Date::getYear() const
{
   return year;
}

void Q1Date::displayDate() const
{
   std::cout << month << "/" << day << "/" << year << std::endl;
}
