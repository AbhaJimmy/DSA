//Leetcode - 07 - Reverse Integer
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long reversedNum=0, digit=0;
        while (x!=0) {
            if (reversedNum>INT_MAX/10 || reversedNum<INT_MIN/10) {
                return 0;
            }
            digit = x%10;
            reversedNum = (reversedNum*10) + digit;
            x /= 10;
        }
        return reversedNum;
    }
};