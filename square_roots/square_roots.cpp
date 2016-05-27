/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/fnTESz2SNJ5xvZuYn

Given a list of integers, define a move as taking one of the integers in the
list and replacing it with its square root, rounded down to the nearest integer.

Given an integer l and an integer k, start with the array [1, 2, 3, ..., l] and
find the minimal sum of the array after k moves.

Example

For l = 5 and k = 2, the output should be
squareRoots(l, k) = 10.

We start with [1, 2, 3, 4, 5].
After square rooting 5 to get [1, 2, 3, 4, 2] and then square rooting 3 to get
[1, 2, 1, 4, 2], we end up with a sum of 10.

Source: Stanford ProCo

Input/Output

[time limit] 500ms (cpp)
[input] integer l

Constraints:
1 ≤ l ≤ 104.

[input] integer k

The number of moves.

Constraints:
1 ≤ k ≤ 104.

[output] integer

The minimal sum after k moves. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

#define I int
I squareRoots(I l, I k) {
    I a[l];
    for (I i=1; i<=l; i++) a[i-1] = i;
    for (I i=0; i<k; ++i) {
        I * p = std::max_element(a, a+l);
        *p = sqrt(*p);
    }
    I s = 0;
    for(I n : a) s += n;
    return s;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	std::cout << squareRoots(9354, 6748) << std::endl; /* 3908034 */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */