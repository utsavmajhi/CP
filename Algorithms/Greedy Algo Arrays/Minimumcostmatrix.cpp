// Minimum cost to convert 3 X 3 matrix into magic square
// A Magic Square is a n x n matrix of distinct element from 1 to n2 where the sum of any row, column or diagonal is always equal to same number.
// Consider a 3 X 3 matrix, s, of integers in the inclusive range [1, 9] . We can convert any digit, a, to any other digit, b, in the range [1, 9] at cost |a – b|.
// Given s, convert it into a magic square at minimal cost by changing zero or more of its digits. The task is to find minimum cost.
// Note: The resulting matrix must contain distinct integers in the inclusive range [1, 9].

// Examples:

// Input : mat[][] = { { 4, 9, 2 },
//                     { 3, 5, 7 },
//                     { 8, 1, 5 }};
// Output : 1
// Given matrix s is not a magic square. To convert
// it into magic square we change the bottom right 
// value, s[2][2], from 5 to 6 at a cost of | 5 - 6 |
// = 1.

// Input : mat[][] = { { 4, 8, 2 },
//                     { 4, 5, 7 },
//                     { 6, 1, 6 }};
// Output : 4

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    
}