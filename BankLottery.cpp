// BEGIN CUT HERE
// PROBLEM STATEMENT
// Most of the local Feudalian banks have started using a lottery system instead 
// of paying interest in the traditional way.  It's a less expensive system for 
// the banks, and most people don't seem to notice the difference.  One bank's 
// current system works as follows.
// 
// After the end of each week, the bank holds a drawing.  Each bank account 
// holder is given 1 ticket per dollar in his balance.  After all the tickets 
// have been distributed, one ticket is chosen randomly.  Every ticket has an 
// equal probability of being chosen.  The chosen ticket's owner wins 
// weeklyJackpot dollars, which is immediately added to his balance.
// 
// You have just opened an account at the bank and would like to know your 
// expected balance at some point in the future.  Somehow, you were able to 
// access the current balances of all the account holders at the bank.  These 
// balances are given in the vector <int> accountBalance.  Your initial balance 
// is accountBalance[0], and each of the remaining elements of accountBalance is 
// the balance of another person at the bank.  For the purposes of this problem, 
// assume that no transactions other than those caused by the lottery system will 
// occur, and assume that no accounts will be closed or created.  Return your 
// expected balance after weekCount weeks.
// 
// DEFINITION
// Class:BankLottery
// Method:expectedAmount
// Parameters:vector <int>, int, int
// Returns:double
// Method signature:double expectedAmount(vector <int> accountBalance, int 
// weeklyJackpot, int weekCount)
// 
// 
// NOTES
// -The returned value must have an absolute or relative error less than 1e-9.
// 
// 
// CONSTRAINTS
// -accountBalance will contain between 1 and 50 elements, inclusive.
// -Each element of accountBalance will be between 0 and 100000, inclusive.
// -At least one element of accountBalance will be greater than 0.
// -weeklyJackpot will be between 1 and 1000, inclusive.
// -weekCount will be between 1 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {100,100}
// 100
// 2
// 
// Returns: 200.0
// 
// 
// 
// 1)
// {2,2,2}
// 1
// 2
// 
// Returns: 2.6666666666666665
// 
// In the first week, there is a 1/3 probability that the balances will become 
// {3,2,2}, a 1/3 probability that they will become {2,3,2} and a 1/3 probability 
// that they will become {2,2,3}.
// 
// In week 2, {3,2,2} will have an expected value of around 3.4286 for account 0. 
// {2,3,2} and {2,2,3} both yield an expected value of around 2.2857 for account 
// 0. The total expected value is around 2.66667.
// 
// 2)
// {1,2,3,4,5,6,7,8,9,10}
// 100
// 20
// 
// Returns: 37.36363636363636
// 
// 
// 
// 3)
// {0,200,200,0,300,300,600}
// 3
// 776
// 
// Returns: 0.0
// 
// With no money in the account, the probability to win the lottery will always 
// be 0.
// 
// END CUT HERE
#line 92 "BankLottery.cpp"
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

class BankLottery {
	public:
	double expectedAmount(vector <int> accountBalance, int weeklyJackpot, int weekCount) {
		
	}
};
