#include "SavingsAccount.h"
#include <iostream>

double SavingsAccount::annualInterestRate = 0.0; //Initialize static member variable

SavingsAccount::SavingsAccount(double balance) : savingsBalance(balance) {}

   void SavingsAccount::modifyInterestRate(double newRate) {
	    annualInterestRate = newRate;
    }

   void SavingsAccount::calculateMonthlyInterest() {
	    savingsBalance += (savingsBalance * annualInterestRate) / 12;
	}

   double SavingsAccount::getSavingsBalance() const {
	    return savingsBalance;
	}

