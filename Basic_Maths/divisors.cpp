// GFG - Given an integer N, print all the divisors of N in the ascending order.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> vec;
        for (int i=1; i*i<=n; i++) {
            if (n%i==0) {
                vec.push_back(i);
                if (n/i != i) vec.push_back((n/i));
            }
        }
        sort(vec.begin(),vec.end());
        for (auto it : vec) cout << it << " ";
    }
};