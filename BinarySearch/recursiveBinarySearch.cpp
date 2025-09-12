#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int low, int high, int target) {
    if (low >= high) return -1;
    int mid = (low+high)/2;
    if (arr[mid] == target) return mid;
    else if (target > arr[mid]) return binarySearch(arr,mid+1,high,target);
    return binarySearch(arr,low,mid-1,target);
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout << "Element found at index: " << binarySearch(arr,0,9,8);
    return 0;
}