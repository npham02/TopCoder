// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// Percy is a penguin in charge of the greatest penguin pastime, penguin 
// sledding. It is Percy's job to help design the sledding course. Percy is a 
// very careful penguin and would like to set up the course in a way that no two 
// sledding paths cross. 
// 
// 
// 
// The sledding course contains some significant locations called checkpoints, 
// and some sledding paths.
// The checkpoints are numbered 1 through numCheckpoints, inclusive.
// Each sledding path is a straight line segment that connects two distinct 
// checkpoints.
// The checkpoints are distinct, and no three of them lie on the same line.
// (Therefore, no checkpoint will ever lie on a sledding path.)
// 
// 
// 
// When designing the course, Percy specifies some pairs of checkpoints that will 
// be connected by sledding paths.
// Accidents happen when two sledding paths cross, so such designs should be 
// avoided.
// Unfortunately, Percy does not know the precise locations of all checkpoints.
// Therefore, Percy's design must not allow two sledding paths to cross, 
// regardless of the locations of the checkpoints.
// Percy calls a design safe if he is sure that no two sledding paths will cross.
// 
// 
// 
// 
// 
// 
// 
// Percy just found an old design that may be unsafe.
// He would like to change it to a safe design by removing zero or more sledding 
// paths from the original design.
// Count all different safe designs he may obtain from the old design in this way.
// Two designs are considered different if there is a pair of checkpoints that is 
// connected by a sledding path in one design and disconnected in the other.
// 
// 
// 
// You are given the int numCheckpoints representing the number of checkpoints in 
// the old design.
// You are also given two vector <int>s checkpoint1 and checkpoint2 that describe 
// the sledding paths in the old design:
// For each i, there is a sledding path connecting the checkpoints checkpoint1[i] 
// and checkpoint2[i].
// Return the number of safe designs that can be made from the old design.
// 
// 
// DEFINITION
// Class:PenguinSledding
// Method:countDesigns
// Parameters:int, vector <int>, vector <int>
// Returns:long long
// Method signature:long long countDesigns(int numCheckpoints, vector <int> 
// checkpoint1, vector <int> checkpoint2)
// 
// 
// CONSTRAINTS
// -numCheckpoints will be between 2 and 50, inclusive.
// -checkpoint1 will contain between 1 and 50 elements, inclusive.
// -checkpoint1 and checkpoint2 will contain the same number of elements.
// -Each element of checkpoint1 will be between 1 and numCheckpoints, inclusive.
// -Each element of checkpoint2 will be between 1 and numCheckpoints, inclusive.
// -Each pair of checkpoints will be connected by at most one sledding path.
// -For each i, element i of checkpoint1 will not be equal to element i of 
// checkpoint2.
// 
// 
// EXAMPLES
// 
// 0)
// 2
// {1}
// {2}
// 
// Returns: 2
// 
// There is only one sledding path. Both including it and removing it are safe 
// designs.
// 
// 1)
// 4
// {1,2,3}
// {2,3,4}
// 
// Returns: 6
// 
// Either sledding path (1,2) or (3,4) needs to be removed to form a safe design. 
// If neither of these is removed the design is unsafe.
// 
// 2)
// 6
// {1,3,6}
// {2,4,4}
// 
// Returns: 5
// 
// Note that some of the checkpoints may be isolated.
// 
// 3)
// 50
// {40, 40, 40, 40, 40, 40, 40, 40, 
//  40, 40, 40, 40, 50, 40, 40, 40, 
//  23, 4, 24, 40, 22, 40, 8, 40, 40,
//  40, 34, 21, 40, 40, 38, 40, 40, 
//  40, 40, 40, 28, 40, 40, 40, 40, 
//  46, 13, 40, 40, 40, 47, 40, 40}
// {45, 42, 20, 48, 12, 32, 25, 10, 
//  26, 39, 16, 2, 19, 43, 37, 17, 
//  19, 19, 19, 18, 19, 27, 19, 29, 
//  11, 36, 19, 19, 1, 41, 19, 35, 
//  14, 33, 49, 3, 19, 7, 5, 19, 31, 
//  19, 19, 6, 9, 15, 19, 44, 30}
// 
// Returns: 68719493118
// 
// 
// 
// 4)
// 36
// {13, 24, 24, 20, 31, 16, 10, 36, 34, 32, 
//  28, 5, 20, 29, 23, 2, 14, 4, 9, 5, 19, 
//  21, 8, 1, 26, 27, 25, 15, 22, 30, 30, 
//  6, 11, 7, 2, 35, 13, 29, 4, 12, 33, 18, 
//  13, 14, 17, 35, 3}
// {10, 15, 27, 1, 29, 11, 5, 18, 33, 1, 9,
//  2, 31, 6, 19, 10, 33, 18, 6, 27, 3, 22,
//  4, 12, 31, 30, 34, 16, 7, 24, 3, 28, 15,
//  21, 22, 8, 26, 20, 14, 32, 25, 17, 35,
//  8, 36, 26, 23}
// 
// Returns: 162
// 
// 
// 
// END CUT HERE
#line 143 "PenguinSledding.cpp"
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

class PenguinSledding {
	public:
	long long countDesigns(int numCheckpoints, vector <int> checkpoint1, vector <int> checkpoint2) {
		
	}
};
