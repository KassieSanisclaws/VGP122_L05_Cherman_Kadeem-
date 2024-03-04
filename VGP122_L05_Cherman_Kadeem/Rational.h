#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {

private: int numerator; int demoninator; int gcd(int a, int b); void reduce();

        public:
            Rational(int num = 0, int denom = 1);

            Rational add(const Rational& other) const;
            Rational subtract(const Rational& other) const;
            Rational multiply(const Rational& other) const;
            Rational divide(const Rational& other) const;

            std::string toRationalString() const;
             double toDouble() const;
       };

#endif
