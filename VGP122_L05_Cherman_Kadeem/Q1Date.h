#pragma once
#ifndef Q1DATE_H
#define Q1DATE_H

class Q1Date {

     private: int month; int day; int year;

public:
    // Constructor with three parameters
    Q1Date(int m, int d, int y);

   // Setters
     void setMonth(int m);
     void setDay(int d);
     void setYear(int y);

   // Getters
     int getMonth() const;
     int getDay() const;
     int getYear() const;

  // Display date in the format MM/DD/YYYY
     void displayDate() const;
};

#endif