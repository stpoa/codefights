/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/RcJf74Kk3kKMqYWwR

You are given a string s. Compress it by replacing its consecutive equal characters with the single one.

Example

For s = "zz000!!G", the answer should be
compress(s) = "z0!G".

[time limit] 500ms (cpp)
[input] string s

A string that may consists of Latin letters, digits and punctuation marks.
0 ≤ s.length ≤ 4550.

[output] string

String s compressed as described above. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

#define S std::string
S compress(S s) {
    int i = 0, j = 0;
    S r;
    while (i < s.size()) {
        r += (s[i]);
        ++i;
        while (r[j] == s[i]) ++i;
        ++j;
    }
    return r;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	std::cout << compress("zz000!!G") << std::endl; /* z0!G */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */