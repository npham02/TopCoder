// BEGIN CUT HERE
// PROBLEM STATEMENT
// You have a string s that contains at least K characters.
// Cat Snuke will remove exactly K characters from the string.
// Afterwards, Snuke will show you the new string and you have to guess the 
// original indices of all removed characters.
// You win the game if you guess all of them correctly.
// 
// For example, suppose that s="snuke" and K=2.
// Snuke removed two characters and showed you the string "nue".
// In this situation you can easily deduce that Snuke must have removed the 
// characters s[0] and s[3].
// You announce that the indices of removed characters are 0 and 3, and you win 
// the game.
// 
// You are given the string s and the int K.
// Return "Certain" (quotes for clarity) if you can always be sure to win the 
// game, regardless of which characters Snuke removes.
// Otherwise, return "Uncertain".
// Note that the return value is case-sensitive.
// 
// DEFINITION
// Class:Decipherability
// Method:check
// Parameters:string, int
// Returns:string
// Method signature:string check(string s, int K)
// 
// 
// CONSTRAINTS
// -K will be between 1 and 50, inclusive.
// -The length of s will be between K and 50, inclusive.
// -Every character in s will be a lowercase letter ('a'-'z').
// 
// 
// EXAMPLES
// 
// 0)
// "snuke"
// 2
// 
// Returns: "Certain"
// 
// This is the example from the problem statement. As all characters are unique, 
// you can always determine the indices of the erased ones.
// 
// 1)
// "aba"
// 1
// 
// Returns: "Certain"
// 
// Snuke will show you one of the strings "ba", "aa", and "ab".
// In the first case you can be sure that he erased the character at index 0.
// The second and the third string correspond to indices 1 and 2, respectively.
// 
// 2)
// "aba"
// 2
// 
// Returns: "Uncertain"
// 
// If Snuke shows you the string "a", there are two possibilities: either he 
// erased the characters at indices 0 and 1, or the characters at indices 1 and 2.
// 
// 3)
// "abcdabcd"
// 3
// 
// Returns: "Certain"
// 
// 
// 
// 4)
// "koukyoukoukokukikou"
// 2
// 
// Returns: "Uncertain"
// 
// 
// 
// 5)
// "wolfsothe"
// 8
// 
// Returns: "Uncertain"
// 
// 
// 
// 6)
// "aa"
// 2
// 
// Returns: "Certain"
// 
// 
// 
// END CUT HERE
//#line 100 "Decipherability.cpp"
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

class Decipherability {
	public:
	string check(string s, int K) 
	{
		int L = s.size(); 
		int x, y; 

		// If a list of string A---A and K is 4, it's left without know the removed is
		// left or right one
		for (y = 0; y < L; y++) {
			for (x = 0; x < y; x++) {
				if (s[x] == s[y] && L!=K && y - x <= K) {
					cout << x << " " << y << endl; 
					return "Uncertain";
				}
			}
		}
		return "Certain";
	}
};
