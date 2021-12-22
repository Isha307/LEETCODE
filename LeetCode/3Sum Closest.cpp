class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
               int l=i+1, r= n-1;
               while(l<r){
                   int sum =nums[i]+nums[l]+nums[r];
                   if(sum==target) return sum;
                   res.push_back(sum);
                   if(abs(target-sum)<abs(target-close)) {
                    close = sum;
                   }
                   if(sum<target)l++;
                   if(sum>target) r--;
                   }
               }
        return close;
    }
};
