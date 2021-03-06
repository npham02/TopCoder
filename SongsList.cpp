// BEGIN CUT HERE
// PROBLEM STATEMENT
// You are given a vector <string> songs, each element of which represents one 
// song and has the format "BAND ALBUM SONG" (quotes for clarity), where BAND, 
// ALBUM and SONG are non-empty strings of lowercase letters, representing the 
// band name, the album name and the song name, respectively.
// 
// You wish to arrange all the songs into a list sorted in lexicographical order. 
// Each song can be included in the list in one of the following 6 formats: "BAND 
// ALBUM SONG", "BAND SONG ALBUM", "ALBUM BAND SONG", "ALBUM SONG BAND", "SONG 
// BAND ALBUM", "SONG ALBUM BAND". Different songs in the list can have different 
// formats.  In other words, the format chosen for a song does not depend on the 
// formats chosen for other songs in the list. Determine all possible 0-indexed 
// positions of the song represented by songs[0] in the list. Return a vector 
// <int> containing all the distinct positions in ascending order.
// 
// 
// DEFINITION
// Class:SongsList
// Method:getPositions
// Parameters:vector <string>
// Returns:vector <int>
// Method signature:vector <int> getPositions(vector <string> songs)
// 
// 
// NOTES
// -A string A comes before a string B lexicographically if A is a proper prefix 
// of B, or if A has a smaller character at the first position where the 
// characters differ. Note that the space character (' ') is lexicographically 
// smaller than the letters 'A'-'Z'.
// 
// 
// CONSTRAINTS
// -songs will contain between 1 and 50 elements, inclusive.
// -Each element of songs will contain between 5 and 50 characters, inclusive.
// -Each element of songs will be in the format "BAND ALBUM SONG" (quotes for 
// clarity), where BAND, ALBUM and SONG are non-empty sequences of lowercase 
// letters ('a'-'z').
// -The following property will hold for every pair of distinct songs S1 and S2 
// in songs:  Write S1 in all 6 possible formats.  Then, write S2 in all 6 
// possible formats.  There will be no overlap between these two lists (overlap 
// within each list is permitted). For example, songs cannot contain both "a b c" 
// and "c b a" because "c b a" can be written as "a b c" (in "SONG ALBUM BAND" 
// format).
// 
// 
// EXAMPLES
// 
// 0)
// { "beatles help yesterday",
//   "queen innuendo showmustgoon",
//   "eagles hotelcalifornia hotelcalifornia" }
// 
// Returns: {0, 1, 2 }
// 
// If we write all the songs in the format "BAND ALBUM SONG", then the song from 
// songs[0] will get position 0 and the list will be the following:
// 
// 
// "beatles help yesterday"
// "eagles hotelcalifornia hotelcalifornia"
// "queen innuendo showmustgoon"
// 
// If we want to put "yesterday" in position 1, we can write it in the format 
// "ALBUM BAND SONG" to get the following list:
// 
// 
// "eagles hotelcalifornia hotelcalifornia"
// "help beatles yesterday"
// "queen innuendo showmustgoon"
// 
// And if we want to put "yesterday" in position 2, we can write it in the format 
// "SONG BAND ALBUM" to get the following list:
// 
// 
// "eagles hotelcalifornia hotelcalifornia"
// "queen innuendo showmustgoon"
// "yesterday beatles help"
// 
// 
// 1)
// { "a a a",
//   "b b b",
//   "c c c" }
// 
// Returns: {0 }
// 
// 
// 
// 2)
// { "b e h",
//   "i i i",
//   "g g g",
//   "f f f",
//   "d d d",
//   "c c c",
//   "a a a" }
// 
// Returns: {1, 3, 5 }
// 
// 
// 
// END CUT HERE
#line 105 "SongsList.cpp"
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

class SongsList {
	public:
	vector <int> getPositions(vector <string> songs) {
		
	}
};
