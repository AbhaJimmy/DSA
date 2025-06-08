//Leetcode - 09 - Palindrome Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long reversedNum=0,num=x,digit=0;
        while (x>0) {
            digit = x%10;
            reversedNum = (reversedNum*10) + digit;
            x /= 10;
        }
        return (reversedNum == num); 
    }
};