// Print all the subsequences of an array whose sum equal 'k'
#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int n, int ind, int sum, int k, vector<int> ds, vector<int> vec) {
    if (ind==n) {
        if (sum==k) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(vec[ind]);
    sum += vec[ind];
    printSubsequence(n,ind+1,sum,k,ds,vec);
    sum -= vec[ind];
    ds.pop_back();
    printSubsequence(n,ind+1,sum,k,ds,vec);
}

int main() {
    int n, k, val;
    cout << "Enter total no. of elements: ";
    cin >> n;
    cout << "Enter sum: ";
    cin >> k;
    vector<int> arr, ds;
    for (int i=0; i<n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    printSubsequence(n, 0, 0, k, ds, arr);
    return 0;
}