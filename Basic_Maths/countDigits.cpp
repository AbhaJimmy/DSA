//Leetcode - 2520 - Count the digits that divide a number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigits(int num) {
        int n=num, rem, count=0;
        while (n > 0) {
            rem = n%10;
            if (rem !=0 && num%rem == 0) count++;
            n /= 10;
        }
        return count;
    }
};