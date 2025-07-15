// Counting Frequencies of Array Elements
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> countFrequencies(vector<int> &nums, int n) {
    vector<vector<int>> result;
    vector<int> temp;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[nums[i]] += 1;
    for (auto it : mpp) {
        temp = {};
        temp.push_back(it.first);
        temp.push_back(it.second);
        result.push_back(temp);
    }
    return result;
}
int main() {
    int n, i, val;
    cin >> n;
    vector<int> nums;
    for (i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }
    vector<vector<int>> result = countFrequencies(nums,n);
    for (auto it : result) {
        for (auto vec : it) cout << vec << " ";
        cout << endl;
    }
    return 0;
}