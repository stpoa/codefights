/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/yhGduAxHaEYDpHtg4

The derivative of a function measures the sensitivity to change of a quantity
(a function value or dependent variable) which is determined by another
quantity (the independent variable).

In this challenge you don't have to know all the details about how it is
calculated. The only thing you need to know is this: if y = a * xb, then its
derivative is calculated as y' = a * b * xb - 1.

You are given some function in the format "y=ax^b" where a and b are integers,
and x is a variable denoted by some lowercase Latin letter. Calculate its
derivative and return it as a string in format y'=Ax^B".

Example

For equation = "y=3x^2", the output should be
simpleDerivativeCalculator(equation) = "y'=6x^1".

For equation = "y=12t^3", the output should be
simpleDerivativeCalculator(equation) = "y'=36t^2".

[time limit] 500ms (cpp)
[input] string equation

An equation in the format described above.

[output] string

Derivative of the given equation. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

#define S std::string
#define T std::to_string

bool w(char c) { return ((c > 47 && c < 58) || c == '-') ;}

S simpleDerivativeCalculator(S e) {
    int a, b, i=2;
    char x;
    S t;
    size_t *l = new size_t;

    while (w(e[i])) { t.push_back(e[i]); ++i; }
    a = std::stoi(t, l);
    x = e[*l+2];
    
    t = "";
    i=i+2;
    while (w(e[i])) { t.push_back(e[i]); ++i; }
    b = std::stoi(t, l);

    return "y'=" + T(a*b) + x +'^'+ T(b-1);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	std::cout << simpleDerivativeCalculator("y=3x^2") << std::endl; /* "y'=6x^1" */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */