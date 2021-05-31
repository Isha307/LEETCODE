class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0], sum=nums[0];
        int n = nums.size();
        for(int i=1; i<n;i++)
        {
         sum=max(nums[i],sum+nums[i]);
         best= max(sum,best);
        }
        return best;
    }
};
