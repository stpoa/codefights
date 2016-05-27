/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*               */ 
/*  Description  */
/*               */

/* https://codefights.com/challenge/J8qXEKPYt4mtnMPaR

You are given a positive integer n either as a number, or in the format "a^b",
where a and b are positive integers (possibly with leading zeros).

Your task is to sum all digits in n. Repeat the process until you get a single
digit and return it.

Example

tillsingle("4444") = 7
4444 => 4 + 4 + 4 + 4 = 16
16 => 1 + 6 = 7
tillsingle("2^9") = 8
29 = 512
512 => 5 + 1 + 2 = 8
[time limit] 500ms (cpp)
[input] string n

0 ≤ n ≤ 251

[output] integer

The resulting digit. */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "includes.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*            */ 
/*  Solution  */
/*            */

using namespace std;

long int d(string s){
    long int r = stol(s);
    size_t p = s.find("^");
    if (p != -1) { r = pow(r, stoi(s.substr(p+1))); }
    return r;
}

int tillsingle(string n) {
    n = to_string((d(n)));
    n.resize(n.size());
    
    if (n.size() == 1) return stoi(n);
    int s = 0;
    for (int i = 0; i < n.size(); ++i) {
        char c = n[i];
        s += atoi(&c);
    }
    return tillsingle(to_string(s));
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*        */ 
/*  Main  */
/*        */

int main() {
	cout << tillsingle("4444") << std::endl; /* 7 */
	return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */