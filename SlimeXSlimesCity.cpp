// BEGIN CUT HERE
// PROBLEM STATEMENT
// NOTE: This problem statement contains images that may not display properly if 
// viewed outside of the applet.
// 
// 
// You are playing a game titled Slimes City. You are managing several towns in 
// this game.
// 
// 
// You have N towns in a region. For simplicity, they are named 0 through N-1. 
// The population of town i is population[i].
// 
// 
// You are going to merge these towns to form one big city. The procedure is as 
// follows. While the number of towns is more than one, pick two different towns, 
// i and j. Delete these two towns and form a new one, with a population equal to 
// the sum of the populations of towns i and j. The name of the newly formed town 
// will be i if i had a larger population than j, or j if j had a larger 
// population than i. If both of the original towns had the same population, 
// either name can be chosen.
// 
// 
// When this process ends, one town remains. That town's name becomes the city's 
// name. Return the number of different possible names for the resulting city.
// 
// DEFINITION
// Class:SlimeXSlimesCity
// Method:merge
// Parameters:vector <int>
// Returns:int
// Method signature:int merge(vector <int> population)
// 
// 
// CONSTRAINTS
// -population will contain between 2 and 50 elements, inclusive.
// -Each element of population will be between 1 and 1,000,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {2, 3, 4}
// 
// Returns: 2
// 
// 
// 
// If towns 0 and 1 are merged first, the city's name will be 1. Otherwise the 
// city's name will be 2. It is illustrated by the following image that shows the 
// only three possible ways to merge the cities.
// 
// 
// 
// 
// 1)
// {1, 2, 3}
// 
// Returns: 2
// 
// 
// 
// If town 2 is merged first (with town 0 or 1), the city's name will be 2. 
// Otherwise, if towns 0 and 1 are merged first (to form a new town named 1, with 
// a population of 3) and then the resulting town is merged with town 2, the city 
// can be named either 1 or 2.  It's not possible for the city to be named 0.
// 
// 
// 
// 2)
// {8,2,3,8}
// 
// Returns: 2
// 
// There may be multiple towns with the same population.
// 
// 3)
// {1000000000, 999999999, 999999998, 999999997}
// 
// Returns: 3
// 
// 
// 
// 4)
// {1,1,1}
// 
// Returns: 3
// 
// 
// 
// 5)
// {1, 2, 4, 6, 14, 16, 20}
// 
// Returns: 3
// 
// 
// 
// END CUT HERE
#line 100 "SlimeXSlimesCity.cpp"
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

class SlimeXSlimesCity {
	public:
	int merge(vector <int> population) {
		
	}
};
