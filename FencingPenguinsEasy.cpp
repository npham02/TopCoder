// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// Paco collects penguins. His penguins like to play and run around on the ice 
// where he lives. In order to keep his penguins safe he decided to construct a 
// single fence enclosure to keep danger out.
// 
// 
// 
// Paco's penguins have fallen asleep. Acting quickly Paco placed numPosts posts 
// in a circular configuration on the ice. Each post is placed radius meters from 
// location (0,0). The posts are equally spaced with the first post being placed 
// at location (radius, 0). 
// 
// 
// 
// To construct the fencing, Paco will connect some pairs of fence posts using 
// straight fences.
// No two segments of the fence are allowed to cross.
// In the resulting fencing, each fence post will either be unused, or it will be 
// connected to exactly two other fence posts. In order to minimize the damage 
// his penguins cause to the ice, he would like to minimize the area enclosed by 
// the fence.
// 
// 
// 
// In order to keep all his penguins happy Paco would like to have all his 
// penguins in the one single enclosure. Two penguins are in the same enclosure 
// if it is possible to walk from one penguin to the other without crossing a 
// fence. 
// 
// 
// 
// 
// 
// 
// 
// You are given two ints numPosts and radius. You are also given two vector 
// <int>s x and y representing the (x,y) location of each of the sleeping 
// penguins. Each penguin is small enough to be considered a point. Compute an 
// return the smallest area of an enclosure that can contain all the penguins. If 
// it is not possible to enclose all the penguins return -1.
// 
// 
// DEFINITION
// Class:FencingPenguinsEasy
// Method:calculateMinArea
// Parameters:int, int, vector <int>, vector <int>
// Returns:double
// Method signature:double calculateMinArea(int numPosts, int radius, vector 
// <int> x, vector <int> y)
// 
// 
// CONSTRAINTS
// -numPosts will be between 3 and 222, inclusive.
// -radius will be between 5 and 100,000, inclusive.
// -x will contain between 1 and 50 elements, inclusive.
// -y will contain the same number of elements as x.
// -Each element in x will be between -100,000 and 100,000, inclusive.
// -Each element in y will be between -100,000 and 100,000, inclusive.
// -No penguin will come within 10^-6 of any potential fencing.
// -No two penguins will occupy the same location.
// 
// 
// EXAMPLES
// 
// 0)
// 3
// 5
// {-1}
// {0}
// 
// Returns: 32.47595264191645
// 
// There is only one possible enclosure that uses all three fence posts.
// 
// 1)
// 30
// 5
// {6}
// {0}
// 
// Returns: -1.0
// 
// 
// 
// 2)
// 4
// 5
// {2}
// {1}
// 
// Returns: 25.0
// 
// If the posts are numbered starting from 0 at (radius, 0) and increasing in the 
// counter-clockwise direction. The resulting possible answers would be:
// 
// (0,1,2)
// (0,1,3)
// 
// Both enclosures cover the same area.
// 
// 
// 3)
// 4
// 5
// {2,-2}
// {1,-1}
// 
// Returns: 50.0
// 
// 
// 
// 4)
// 8
// 5
// {8}
// {8}
// 
// Returns: -1.0
// 
// It is not possible to enclose this penguin.
// 
// Please note that while a penguin can't be located close to a potential fencing 
// (see constraints), it can be located close to or exactly on a straight line 
// passing through any pair of fence posts.
// 
// 5)
// 7
// 10
// {9}
// {1}
// 
// Returns: 29.436752637711805
// 
// 
// 
// 6)
// 30
// 800
// {8,2,100,120,52,67,19,-36}
// {-19,12,88,-22,53,66,-140,99}
// 
// 
// Returns: 384778.74757953023
// 
// 
// 
// END CUT HERE
#line 151 "FencingPenguinsEasy.cpp"
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

class FencingPenguinsEasy {
	public:
	double calculateMinArea(int numPosts, int radius, vector <int> x, vector <int> y) {
		
	}
};
