// LeetCode 121 - Best time to buy and sell stock
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), minBuy=prices[0], profit=0, cost=0;
        for (int i=1; i<n; i++) {
            cost = prices[i] - minBuy;
            profit = max(profit,cost);
            minBuy = min(minBuy,prices[i]);
        }
        return profit;
    }
};