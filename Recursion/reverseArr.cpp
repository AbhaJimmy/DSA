#include<bits/stdc++.h>
using namespace std;
void reverse(int i, int n, int *arr) {
    if (i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,n,arr);
}
int main() {
    int arr[] = {1,2,3,4};
    cout << "Before reversing: \n";
    for (int i=0; i<4; i++) cout << arr[i] << " ";
    reverse(0,4,arr);
    cout << "\nAfter reversing: \n";
    for (int i=0; i<4; i++) cout << arr[i] << " ";
    return 0;
}