// GFG - Minimize Max Distance to Gas Station
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int noOfGasStations(vector<int> &stations, long double dist) {
        int count = 0;
        for (int i=1; i<stations.size(); i++) {
            int numberInBetween = (stations[i] - stations[i-1]) / dist;
            if (fabs((stations[i] - stations[i-1]) - numberInBetween * dist) < 1e-6) {
                numberInBetween--;
            }
            count += numberInBetween;
        }
        return count;
    }
    double minMaxDist(vector<int> &stations, int K) {
        int n=stations.size();
        long double low=0, high=0;
        for (int i=0; i<n-1; i++) {
            high = max(high, (long double)(stations[i+1] - stations[i]));
        }
        long double diff = 1e-6;
        while (high - low > diff) {
            long double mid = (high + low) / 2.0;
            if (mid < diff) {
                low = mid;
                continue;
            }
            int count = noOfGasStations(stations,mid);
            if (count > K) low = mid;
            else high = mid;
        }
        return high;
    }
};