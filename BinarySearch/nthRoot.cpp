// GFG - Find nth root of m
class Solution {
  public:
    int multiply(int n, int m, int mid) {
        long long ans = 1;
        for (int i=1; i<=n; i++) {
            ans = ans * mid;
            if (ans > m) return 2;
        }
        if (ans == m) return 0;
        return 1;
    }
    int nthRoot(int n, int m) {
        int low=1, high=m, mid, product;
        while (low <= high) {
            mid = (low+high)/2; 
            product = multiply(n,m,mid);
            if (product == 0) return mid;
            else if (product == 2) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};