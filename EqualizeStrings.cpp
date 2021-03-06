// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// You have two strings, s and t, and you want them to be equal.  You can change 
// individual letters in the strings, but you cannot add or remove letters.  In a 
// single move, you can change any one letter in one string to the letter that 
// comes directly before or after it in the alphabet.  The alphabet wraps around, 
// so you can also change 'a' to 'z' or 'z' to 'a'.  You want to make the two 
// strings equal using the minimum possible number of moves.  Return the 
// resulting string.  If there are multiple answers, return the one that comes 
// earliest alphabetically.
// 
// 
// DEFINITION
// Class:EqualizeStrings
// Method:getEq
// Parameters:string, string
// Returns:string
// Method signature:string getEq(string s, string t)
// 
// 
// NOTES
// -A string comes earlier lexicographically than another one of the same length 
// if and only if it has a character closer to the beginning of the alphabet in 
// the first position at which they differ.
// 
// 
// CONSTRAINTS
// -s will contain between 1 and 50 characters, inclusive.
// -s and t will contain the same number of characters.
// -Each character of s and t will be a lowercase letter ('a'-'z').
// 
// 
// EXAMPLES
// 
// 0)
// "cat"
// "dog"
// 
// Returns: "caa"
// 
// Use 1 move to change 'd' to 'c', 12 moves to change 'o' to 'a', 6 moves to 
// change 'g' to 'a' and 7 moves to change 't' to 'a' for a total of 26 moves to 
// get both strings equal to "caa".
// 
// 1)
// "abcdefghijklmnopqrstuvwxyz"
// "bcdefghijklmnopqrstuvwxyza"
// 
// Returns: "abcdefghijklmnopqrstuvwxya"
// 
// Change every letter in t to its previous letter in the alphabet, using exactly 
// one move per letter, with the exception of the last character; it's preferable 
// to change the 'z' in s to 'a' to obtain a lexicographically earlier solution.
// 
// 2)
// "programmingcompetitionsrule"
// "programmingcompetitionsrule"
// 
// Returns: "programmingcompetitionsrule"
// 
// If both strings are equal, then you don't need any moves.
// 
// 3)
// "topcoderopen"
// "onlinerounds"
// 
// Returns: "onlcndaoondn"
// 
// 
// 
// END CUT HERE
#line 74 "EqualizeStrings.cpp"
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

class EqualizeStrings {
	public:
	string getEq(string s, string t) {
		
        int totalChar = 26;
        
        string newString = "";
        int L = s.length();
        for (int i = 0; i < L; i++) {
            char sChar = s[i];
            char tChar = t[i];
            
            // converting one Char to the other
            int numMove1 = abs(sChar - tChar);
            
            // converting both to 'a'
            int numMove2 = (min(s[i], t[i]) - 'a') + ('a' + totalChar - max(s[i], t[i]));
            
            // check which one yields less number of moves
            if (numMove1 < numMove2) {
                newString += min(s[i], t[i]);
            } else {
                newString += 'a';
            }
        }
        
        return newString;
	}
};
