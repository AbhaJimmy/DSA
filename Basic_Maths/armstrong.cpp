#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n) {
    int num=n, val=0, rem, digits = to_string(n).length();
    while (num > 0) {
        rem = num%10;
        val += round(pow(rem,digits));
        num /= 10;
   }
   return (val == n);
}
int main() {
    int n;
    cin >> n;
    cout << checkArmstrong(n);
    return 0;
}