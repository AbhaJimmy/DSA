// Code 360 - Check Palindrome (recursive)
#include<bits/stdc++.h>
using namespace std;
int i=0;
bool isPalindrome(string& str) {
    if (i >= str.size()/2) return true;
    if (str[i] != str[str.size()-i-1]) return false;
    i++;
    return isPalindrome(str);
}