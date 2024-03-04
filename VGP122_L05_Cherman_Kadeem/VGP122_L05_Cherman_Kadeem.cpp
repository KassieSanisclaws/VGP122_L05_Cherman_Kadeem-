// VGP122_L05_Cherman_Kadeem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//QUESTION[1]: Create a class called Q1Date. The class should have three private data members: month, day, and year.
//QUESTION[2]: Create a class called Rational.
//QUESTION[3]: SavingsAccount class that represents a savings account.

#include "Q1Date.h"
#include "Rational.h"
#include <iostream>
#include "SavingsAccount.h"

int main()
{
 //QUESTION[1]: Create a class called Q1Date. The class should have three private data members: month, day, and year. The class should have
  //STEP[1]: Create a Q1Date object and initialize it with the date 12/25/2020
    Q1Date myDate(2, 29, 2024);
    myDate.displayDate();

 //STEP[2]: Set the month to 13 and display the date
    myDate.setMonth(13);
    myDate.setDay(32);
    myDate.setYear(2021);
    myDate.displayDate();

    return 0;


 //QUESTION[2]: Create a class called Rational. The class should have
  //STEP[1]: Create a Rational object and initialize it with the value 2/4
    Rational r1(2, 4); // Initializes fraction 2/4
  //STEP[2]: Create a Rational object and initialize it with the value 3/6
    Rational r2(3, 6); // Initializes fraction 3/6

    Rational sum = r1.add(r2);
    Rational difference = r1.subtract(r2);
    Rational product = r1.multiply(r2);
    Rational quotient = r1.divide(r2);

    std::cout << "Sum: " << sum.toRationalString() << " or " << sum.toDouble() << std::endl;
    std::cout << "Difference: " << difference.toRationalString() << " or " << difference.toDouble() << std::endl;
    std::cout << "Product: " << product.toRationalString() << " or " << product.toDouble() << std::endl;
    std::cout << "Quotient: " << quotient.toRationalString() << " or " << quotient.toDouble() << std::endl;

    return 0;


//QUESTION[3]: SavingsAccount class that represents a savings account. The class should have the following private data members:
    SavingsAccount saver1(2000.0);
    SavingsAccount saver2(3000.0);

   //STEP[1]: Set the annual interest rate to 3%
     SavingsAccount::modifyInterestRate(0.03);

   //STEP[2]: Calculate the monthly interest for each of the two savers for 12 months
     saver1.calculateMonthlyInterest();
     saver2.calculateMonthlyInterest();

    std::cout << "After 1 month with 3% interest rate:" << std::endl;
    std::cout << "Saver1 balance: $" << saver1.getSavingsBalance() << std::endl;
    std::cout << "Saver2 balance: $" << saver2.getSavingsBalance() << std::endl;

    return 0;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
