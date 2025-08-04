#include <bits/stdc++.h>
using namespace std;
void maxSumArray(int n, vector<int> arr) {
    int maxSum=INT_MIN, sum=0, subSt, subE;
    for (int i=0; i<n; i++) {
        if (sum == 0) subSt = i;
        sum += arr[i];
        if (sum > maxSum) {
            maxSum = sum;
            subE = i;
        }
        if (sum < 0) sum = 0;
    }
    cout << "Subarray with maximum sum: " << endl;
    for (int i=subSt; i<=subE; i++) 
        cout << arr[i] << " ";
}
int main() {
    int n, val;
    cin >> n;
    vector<int> arr;
    for (int i=0; i<n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    maxSumArray(n,arr);
    return 0;
}