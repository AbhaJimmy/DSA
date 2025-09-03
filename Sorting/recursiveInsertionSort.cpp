#include <bits/stdc++.h>
using namespace std;
void insertion(vector<int> &arr, int n, int i) {
    if (i==n) return;
    int j=i;
    while (j>0 && arr[j-1] > arr[j]) {
        swap(arr[j],arr[j-1]);
        j--;
    }
    insertion(arr,n,i+1);
}
int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr;
    for (int i=0; i<n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> val;
        arr.push_back(val);
    }
    cout << "\nBefore sorting: " << endl;
    for (auto it : arr) cout << it << " ";
    cout << endl;
    insertion(arr,n,0);
    cout << "\nAfter sorting: " << endl;
    for (auto it : arr) cout << it << " ";
    return 0;
}