#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount {
    private: 
          static double annualInterestRate; 
          double savingsBalance;

    public: 
           SavingsAccount(double balance = 0.0);
    static void modifyInterestRate(double newRate);
           void calculateMonthlyInterest();
           double getSavingsBalance() const;

};
#endif