// A variation of the question, rearrange array elements by sign, where the number of positive and negative elements is not equal.
#include<bits/stdc++.h>
using namespace std;
void alternate(vector<int> &vec, int n) {
    vector<int> pos, neg;
    for (int i=0; i<n; i++) {
        if (vec[i] < 0) {
            neg.push_back(vec[i]);
        }
        else {
            pos.push_back(vec[i]);
        }
    }
    if (pos.size()>neg.size()) {
        for (int i=0; i<neg.size(); i++) {
            vec[2*i] = pos[i];
            vec[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for (int i=neg.size(); i<pos.size(); i++) {
            vec[index] = pos[i];
            index++;
        }
    }
    else {
        for (int i=0; i<pos.size(); i++) {
            vec[2*i] = pos[i];
            vec[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for (int i=pos.size(); i<neg.size(); i++) {
            vec[index] = neg[i];
            index++;
        }
    }
}
int main() {
    int n, val;
    cin >> n;
    vector<int> vec;
    for (int i=0; i<n; i++) {
        cin >> val;
        vec.push_back(val);
    }
    alternate(vec,n);
    cout <<"\nAfter arranging: " << endl;
    for (auto it : vec) cout << it << " ";
    return 0;
}