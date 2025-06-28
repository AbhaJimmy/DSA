// GFG - Given an positive integer n, print numbers from 1 to n without using loops.
#include<bits/stdc++.h>
using namespace std;

//without using backtracking
class Solution {
  public:
    void printTillN(int i, int n) {
        if (i>n) return;
        cout << i << " ";
        printTillN(i+1, n);
    }
};

//using backtracking
class Solution {
  public:
    void printTillN(int n) {
        if (n==0) return;
        printTillN(n-1);
        cout << n << " ";
    }
};