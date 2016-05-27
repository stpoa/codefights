/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/MQWWZHNQRc8Ttrxni

Triangular numbers are defined by the formula n * (n + 1) / 2 with n starting
from 1. They count the number of objects that can form an equilateral triangle
as shown in the picture below:



So the sequence of triangular numbers begins as follows:
1, 3, 6, 10, 15, 21, 28, ....

It is proven that the sum of squares of any two consecutive triangular numbers
is equal to another triangular number.

In this challenge you're given a triangular number n. Return true if it can be
represented as a sum of squares of two consecutive triangular numbers, or false
otherwise.

Example

For n = 6, the output should be
Triangular(n) = false.
No two squared consecutive triangular numbers add up to 6.
For n = 45, the output should be
Triangular(n) = true.
3*3 + 6*6 = 9 + 36 = 45
[time limit] 500ms (cpp)
[input] integer n

A positive triangular number, 3 ≤ n ≤ 5 * 107.

[output] boolean

true if it is possible to represent n as the sum of squares of two consecutive
triangular numbers, and false otherwise. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

bool Triangular(int n) {
    int x=1, y=1, i=1, j=1;
    while(n > x*x) {
        x=i*(i+1)/2;
        i++;
    }
    while(i>=1 && x!=n){
        while(x*x + y*y <= n){
            y = j * (j + 1) / 2;
            if(x*x + y*y == n) return true;
            j++;
        }
        i--;
        x = i * (i + 1) / 2;
    }
    return false;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	std::cout << Triangular(5050) << std::endl; /* true */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */