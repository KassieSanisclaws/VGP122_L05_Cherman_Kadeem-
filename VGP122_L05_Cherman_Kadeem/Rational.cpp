#include "Rational.h"
#include <iostream>
#include <sstream>


int Rational::gcd(int a, int b) {
	
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}

void Rational::reduce() {
	
	int common = gcd(numerator, demoninator);
	numerator /= common;
	demoninator /= common;
}

Rational::Rational(int num, int denom) : numerator(num), demoninator(denom) { 
	  reduce();

}

Rational Rational::add(const Rational& other) const {	
	int new_num = numerator * other.demoninator + demoninator * other.numerator;
	int new_denom = demoninator * other.demoninator;
  
  return Rational(new_num, new_denom);
}

Rational Rational::subtract(const Rational& other) const {
	int new_num = numerator * other.demoninator - demoninator * other.numerator;
	int new_denom = demoninator * other.demoninator;
  
  return Rational(new_num, new_denom);
}

Rational Rational::multiply(const Rational& other) const {
	int new_num = numerator * other.numerator;
	int new_denom = demoninator * other.demoninator;
  
  return Rational(new_num, new_denom);
}

Rational Rational::divide(const Rational& other) const {
	int new_num = numerator * other.demoninator;
	int new_denom = demoninator * other.numerator;
  
  return Rational(new_num, new_denom);
}

std::string Rational::toRationalString() const {
	std::stringstream ss("");

	ss << numerator << "/" << demoninator;
	
  return ss.str();
}

double Rational::toDouble() const {
	return static_cast<double>(numerator) / demoninator;
}
