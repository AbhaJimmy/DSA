// GFG - Given a positive integer, n. Find the factorial of n.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int factorial(int n) {
        if (n==1) return 1;
        return n * factorial(n-1);
    }
};