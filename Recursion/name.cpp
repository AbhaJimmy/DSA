// GFG - Print GFG 'n' times without using loops.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printGfg(int N) {
        if(N==0) return;
        cout << "GFG ";
        printGfg(N--);
    }
};