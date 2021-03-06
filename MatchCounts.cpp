// BEGIN CUT HERE
// PROBLEM STATEMENT
// The digit d will appear in element i of ability if person i can perform task 
// d.  You are required to assign each of the given people to exactly one of the 
// 6 tasks (numbered '0' through '5').  Two people cannot be assigned to the same 
// task.  Return the number of assignments possible.  Two assignments differ if 
// there is a person who is assigned a different task in each assignment.
// 
// DEFINITION
// Class:MatchCounts
// Method:howMany
// Parameters:vector <string>
// Returns:int
// Method signature:int howMany(vector <string> ability)
// 
// 
// CONSTRAINTS
// -ability will contain between 1 and 6 elements, inclusive.
// -Each element of ability will contain between 1 and 6 characters, inclusive.
// -Each character in ability will be a digit between '0' and '5', inclusive.
// -No character will appear more than once in a single element of ability.
// 
// 
// EXAMPLES
// 
// 0)
// {"045"}
// 
// Returns: 3
// 
// Person 0 can perform 3 different tasks.
// 
// 1)
// {"01","23"}
// 
// Returns: 4
// 
// Two choices for person 0 and two choices for person 1.
// 
// 2)
// {"01","01"}
// 
// Returns: 2
// 
// Both people have two choices, but not all 2*2 possibilities are feasible.
// 
// 3)
// {"0","0"}
// 
// Returns: 0
// 
// 4)
// {"012345","012345","012345","012345","012345","012345"}
// 
// 
// Returns: 720
// 
// END CUT HERE
#line 60 "MatchCounts.cpp"
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

class MatchCounts {
	public:
	int howMany(vector <string> ability) {
		
	}
};
