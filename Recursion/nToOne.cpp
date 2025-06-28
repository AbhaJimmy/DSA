// GFG - Print numbers from N to 1 without the help of loops.
#include<bits/stdc++.h>
using namespace std;

// without using backtracking
class Solution {
  public:
    void printNos(int N) {
        if (N<1) return;
        cout << N << " "; 
        printNos(--N);
    }
};

//using backtracking
class Solution {
  public:
    void printNos(int i, int N) {
        if (i>N) return;
        printNos(i+1, N);
        cout << i << " "; 
    }
};
