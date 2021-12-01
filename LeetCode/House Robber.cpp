class Solution {
public:
    int rob(vector<int>& v) {
        int sum=0, n= v.size();
        vector<int> dp(n,0);
        if (v.size() == 1) return v[0];
        if (v.size() == 2) return max(v[0],v[1]);
        
        dp[0]=  v[0];
        dp[1]=max(v[0],v[1]);
            for(int i=2;i<n;i++){
              dp[i] =max(dp[i-1], v[i]+dp[i-2]);
        }
    return dp[n-1];
    }
};
