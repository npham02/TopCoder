// BEGIN CUT HERE
// PROBLEM STATEMENT
// You are organizing a subregional ACM ICPC contest. The problemset at the 
// contest will consist of M problems. According to an ACM ICPC tradition, when a 
// team solves a problem, it gets awarded a balloon. To account for this, you've 
// bought balloons of N different colors (conveniently numbered from 0 to N-1). 
// The number of balloons of color i that you've bought is given by balloonCount
// [i]. Balloons come in two sizes: medium and large. All balloons of the same 
// color have the same size. If the i-th character of balloonSize is 'M', then 
// all balloons of color i have medium size, and if this character is 'L', then 
// all balloons of color i have large size.
// 
// Today you've been at the meeting with the scientific committee of the contest. 
// There, you learned that there are additional restrictions of which you were 
// not aware. Here are those restrictions:
// 
// All balloons that get awarded for a particular problem must have the same 
// color and size.
// For any two problems, the colors of balloons awarded for solving them must be 
// different. In other words, the color of balloons awarded for each problem must 
// be unique.
// 
// These are definitely bad news, since you ordered balloons pretty much 
// arbitrarily and it's possible that you won't be able to satisfy the 
// restrictions with the balloons you currently have. However, the good news is 
// that scientific committee members were able to evaluate the difficulty of each 
// problem. More exactly, they told you that the maximum number of teams that can 
// potentially solve the i-th problem is maxAccepted[i]. The scientific committee 
// members are very clever and experienced, so their prediction is guaranteed to 
// come true.
// 
// Your budget is limited and balloons are expensive, so buying more of them is 
// not an option. Fortunately, there is a very cheap balloon repaint service at 
// your city, so you are going to use it. The service offers repainting a given 
// balloon into any other color. This can be one of the N colors you have, as 
// well as any color that you don't have yet. However, it is not possible to 
// change the size of a balloon.
// 
// You are given the vector <int>s balloonCount, maxAccepted and the string 
// balloonSize. Return the minimum number of balloons that have to be repainted 
// in order to guarantee that you will be able to award balloons to the teams 
// properly. If it is impossible to achieve the goal using any number of balloon 
// repaintings, return -1.
// 
// DEFINITION
// Class:ICPCBalloons
// Method:minRepaintings
// Parameters:vector <int>, string, vector <int>
// Returns:int
// Method signature:int minRepaintings(vector <int> balloonCount, string 
// balloonSize, vector <int> maxAccepted)
// 
// 
// CONSTRAINTS
// -balloonCount will contain between 1 and 50 elements, inclusive.
// -Each element of balloonCount will be between 1 and 100, inclusive.
// -balloonSize will contain the same number of characters as the number of 
// elements in balloonCount.
// -Each character of balloonSize will be 'M' or 'L'.
// -maxAccepted will contain between 1 and 15 elements, inclusive.
// -Each element of maxAccepted will be between 1 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {100}
// "L"
// {1,2,3,4,5}
// 
// Returns: 10
// 
// You have 100 large balloons of the same color. 5 of them can be used for 
// problem 4 and 1+2+3+4=10 balloons need to be repainted in order to be used for 
// remaining problems.
// 
// 1)
// {100}
// "M"
// {10,20,30,40,50}
// 
// Returns: -1
// 
// We don't have enough balloons. Repainting is not going to help.
// 
// 2)
// {5,6,1,5,6,1,5,6,1}
// "MLMMLMMLM"
// {7,7,4,4,7,7}
// 
// Returns: 6
// 
// (Note that all of the indices in this annotation are 0-based.)
// 
// Repaint one balloon of color 7 into color 1. Repaint one balloon of color 7 
// into color 4. Now large balloons can be awarded for problems 0, 1, and 2.
// 
// Repaint two balloons of colors 2 and 5 into color 0. Repaint two balloons of 
// colors 6 and 8 into color 3. Now medium balloons of colors 0, 3, and 6 can be 
// awarded for problems 3, 4, and 5.
// 
// 3)
// {100,100}
// "ML"
// {50,51,51}
// 
// Returns: -1
// 
// Even though we have 200 balloons overall and only at most 152 accepted 
// solutions, there is still no way of dividing and repainting the balloons that 
// works.
// 
// 4)
// {8,5,1,4,1,1,3,1,3,3,5,4,5,6,9}
// "MMMLLLMMLLMLMLM"
// {3,5,3,3,5,6,4,6,4,2,3,7,1,5,2}
// 
// Returns: 5
// 
// 
// 
// 5)
// {1,18,4,7,19,7,7,1,4,8,10,5,14,13,8,22,6,3,13,5,3,4,2,1,3,15,19,4,5,9,4,11,2,7,12,20,11,26,22,7,2,10,9,20,13,20,2,9,11,9}

// "LLMLLLLMLLLLLLLLLLLLMLLLLLLLLLLMMLMLLLMLLLLLLLLMLL"
// {44,59,29,53,16,23,13,14,29,42,13,15,66,4,47}
// 
// Returns: 210
// 
// 
// 
// END CUT HERE
#line 134 "ICPCBalloons.cpp"
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

class ICPCBalloons {
	public:
	int minRepaintings(vector <int> balloonCount, string balloonSize, vector <int> maxAccepted) {
		
	}
};
