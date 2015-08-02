// BEGIN CUT HERE
// PROBLEM STATEMENT
// You are given two strings: A and B.  You would like to align these two strings 
// by inserting '-' characters in them so that every character in A lines up with 
// the same character in B or with a '-' in B, and vice versa.  Each maximal 
// sequence of consecutive '-' characters costs x, plus an additional 1 per each 
// '-' character.  For example, changing "ABC" to "A-B-C" costs x+1+x+1, while 
// changing it to "A--BC" costs x+2.  Given, A, B, and x return the minimum cost 
// to align the two strings.
// 
// DEFINITION
// Class:Alignment
// Method:align
// Parameters:string, string, int
// Returns:int
// Method signature:int align(string A, string B, int x)
// 
// 
// CONSTRAINTS
// -A and B each contain between 1 and 50 uppercase letters ('A'-'Z'), inclusive.
// -x will be between 0 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// "ABC"
// "ACE"
// 1
// 
// Returns: 4
// 
// We can line things up as:
// 
// ABC-
// A-CE
// 
// 
// 1)
// "AAABAAAABAA"
// "AAAABAABAAA"
// 1
// 
// Returns: 7
// 
// 
//  AAA-BAAAABAA-
//  AAAABAA--BAAA
// 
// 
// 2)
// "AAABAAAABAA"
// "AAAABAABAAA"
// 10
// 
// Returns: 28
// 
// 
//  AAABAAAABAA----
//  AAA----ABAABAAA
// 
// 
// 3)
// "AA"
// "B"
// 1
// 
// Returns: 5
// 
// END CUT HERE
#line 72 "Alignment.cpp"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath> 
#include <map> 
#include <queue> 
#include <stack> 

using namespace std; 

class Alignment {
	public:
	int align(string A, string B, int x) {
		
	}
};
