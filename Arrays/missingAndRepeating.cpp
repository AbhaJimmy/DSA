// GFG - Missing and Repeating
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        long long sum1=0,sum2=0,sumN=0,sumN2=0,val1,val2,repeating=-1,missing=-1;
        for (int i=0; i<n; i++) {
            sum1 += arr[i];
            sumN += (i+1);
            sum2 += (long long)arr[i]*(long long)arr[i];
            sumN2 += (long long)(i+1)*(long long)(i+1);
        }
        val1 = sum1 - sumN;
        val2 = sum2 - sumN2;
        val2 = val2/val1;
        repeating = (val1+val2)/2;
        missing = repeating - val1;
        return {(int)repeating,(int)missing};
    }
};