// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
// Given is a tree on n nodes.
// The nodes are numbered 0 through n-1.
// You are given the description of the tree as a vector <int> parent with n-1 
// elements.
// For each valid i, there is an edge between vertices (i+1) and parent[i].
// 
// 
// 
// 
// 
// A person is currently standing in node 0.
// In a single step, the person can move from its current node to any adjacent 
// node.
// You are given an int L.
// The person is allowed to make at most L steps.
// 
// 
// 
// 
// 
// Return the maximum number of nodes the person can visit during the walk.
// Node 0 (where the walk starts) and the node where the walk ends count as 
// visited.
// Each visited node is only counted once, even if it is visited multiple times.
// 
// 
// DEFINITION
// Class:WalkOverATree
// Method:maxNodesVisited
// Parameters:vector <int>, int
// Returns:int
// Method signature:int maxNodesVisited(vector <int> parent, int L)
// 
// 
// CONSTRAINTS
// -parent will contain between 0 and 49 elements, inclusive.
// -For each i, parent[i] will be between 0 and i, inclusive.
// -L will be between 1 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {0, 0}
// 2
// 
// Returns: 2
// 
// The tree consists of edges 1-0 and 2-0.
// Our person will start in node 0 and can make at most L=2 steps.
// In two steps, the best we can do is visit one of the nodes 1 and 2.
// 
// 1)
// {0, 0}
// 3
// 
// Returns: 3
// 
// This is the same tree, only now we have L=3.
// In three steps the person can visit all three nodes: for example, by going 
// from node 0 to node 1, back to node 0, and finally to node 2.
// Note that even though the person visited node 0 twice, we only count it once.
// 
// 2)
// {0, 1, 2, 3}
// 2
// 
// Returns: 3
// 
// 
// 
// 3)
// {0,0,0,0,2,4,2,3,1}
// 1
// 
// Returns: 2
// 
// 
// 
// 4)
// {0,0,1,2,3,2,3,1,3,0,1,8,6,8,0,5,15,0,9}
// 4
// 
// Returns: 5
// 
// 
// 
// 5)
// {0,0,0,1,1,3,5,1,4,5,2,2,10,5,10,10,11,13,8,3,18,15,20,20,23,8,11,26,4}
// 26
// 
// Returns: 17
// 
// 
// 
// 6)
// {0, 0, 2, 0}
// 
// 100
// 
// Returns: 5
// 
// As the tree is very small and L large, the person can easily visit all nodes.
// 
// 7)
// {0, 0, 2}
// 4
// 
// Returns: 4
// 
// 
// 
// END CUT HERE
#line 118 "WalkOverATree.cpp"
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

class WalkOverATree {
	public:
	int maxNodesVisited(vector <int> parent, int L) {
		
	}
};
