/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/vACv5XkFeg54A6rtr

Amin is given two integers a and b as strings. He needs to find (a * b) mod 10, where mod is a modulo operation. a and b are too large for poor Amin to calculate their product, so now it's up to you to do it!

Example

For a = "34" and "b = 58", the output should be
modulo10(a, b) = 2.

34 * 58 = 1972, so the answer is 2.

Input/Output

[time limit] 500ms (cpp)
[input] string a

1 ≤ a.length ≤ 150.

[input] string b

1 ≤ b.length ≤ 150.

[output] integer

a * b modulo 10. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

#define S std::string
int modulo10(S a, S b) {
    return (atoi(&a.back()) * atoi(&b.back()))%10;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	std::cout << modulo10("34","58") << std::endl; /* 2 */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */