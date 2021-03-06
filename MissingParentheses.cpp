// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// Given a string of parentheses, you must turn it into a well formed string by 
// inserting as few parentheses as possible, at any position (you cannot delete 
// or change any of the existing parentheses).
// 
// A well formed string of parentheses is defined by the following rules:
// 
//     The empty string is well formed.
//     If s is a well formed string, (s) is a well formed string.
//     If s and t are well formed strings, their concatenation st is a well 
// formed string.
// 
// As examples, "(()())", "" and "(())()" are well formed strings and "())(", "()
// (" and ")" are malformed strings.
// 
// Given a string par of parentheses, return the minimum number of parentheses 
// that need to be inserted to make it into a well formed string.
// 
// 
// DEFINITION
// Class:MissingParentheses
// Method:countCorrections
// Parameters:string
// Returns:int
// Method signature:int countCorrections(string par)
// 
// 
// CONSTRAINTS
// -par will contain between 1 and 50 characters, inclusive.
// -Each character of par will be an opening or closing parenthesis, i.e., '(' or 
// ')'.
// 
// 
// EXAMPLES
// 
// 0)
// "(()(()"
// 
// Returns: 2
// 
// The string below is a possible well formed string you can get to by inserting 
// the two closing parentheses marked.
// 
// (())(())
//    ^   ^
// 
// 
// 1)
// "()()(()"
// 
// Returns: 1
// 
// You can fix the string by inserting a single closing parenthesis at the end.
// 
// 2)
// "(())(()())"
// 
// Returns: 0
// 
// The input string is well formed, so no insertion is needed.
// 
// 3)
// "())(())((()))))()((())))()())())())()()()"
// 
// Returns: 7
// 
// 
// 
// END CUT HERE
#line 73 "MissingParentheses.cpp"
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

class MissingParentheses {
	public:
	int countCorrections(string par) {
		int numInsert = 0; 
		stack<char> Open; 
		int i = 0; 
		while (i < par.length()) {
			if (par[i] == '(') {
				Open.push(par[i]);
			} else if (par[i] == ')') {
				if (!Open.empty()) {
					Open.pop(); 
				} else {
					numInsert++;
				}
			}
			i++; 
		}
		numInsert += Open.size(); 
		return numInsert; 
	}
};
