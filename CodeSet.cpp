// BEGIN CUT HERE
// PROBLEM STATEMENT
// A codeset is a set of n binary strings (the codes) that could be used to
// encode messages based on an alphabet of size n. In order to be able to
// decode the result, a codeset must have the property that no code is a prefix
// of any other code. A codeset is "maximal" if it is not possible to add
// any additional code to the codeset without violating the prefix requirement.
// 
// We are interested in how many different codesets of size n exist. For example,
// when n=4 there are 5 different maximal codesets:
// 
//          {"000","001","01","1"}, {"010","011","00","1"}, {"111","110","10","0"},
//          {"101","100","11","0"}, {"00","11","01","10"}
// 
// Oh yes, we have a favorite code and we are only interested in codesets that
// include that code.
// You are given n, the size of each codeset, and a binary string favorite.  
// Return the number of maximal codesets of size n that contain favorite.  If 
// there are more than 1,000,000,000, return -1 instead.
// 
// 
// DEFINITION
// Class:CodeSet
// Method:numSets
// Parameters:int, string
// Returns:int
// Method signature:int numSets(int n, string favorite)
// 
// 
// CONSTRAINTS
// -n will be between 2 and 20, inclusive.
// -favorite will contain between 1 and 20 characters, inclusive.
// -Each character in favorite will be '0' or '1' (zero or one).
// 
// 
// EXAMPLES
// 
// 0)
// 4
// "01"
// 
// Returns: 2
// 
// 
// 
//    This is the example shown above. Only the first and last codeset 
//    listed contain "01".
// 
// 
// 
// 1)
// 4
// "0110"
// 
// Returns: 0
// 
// 
// 
//    None of the possible codesets contains "0110".
// 
// 2)
// 2
// "0"
// 
// Returns: 1
// 
// 
// 
//    The only maximal codeset of size 2 is {0,1}.
// 
// 
// 3)
// 20
// "011001"
// 
// Returns: 65132550
// 
// 
// 
// 4)
// 15
// "100001"
// 
// Returns: 87210
// 
// 
// 
// END CUT HERE
#line 90 "CodeSet.cpp"
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

class CodeSet {
	public:
	int numSets(int n, string favorite) {
		
	}
};
