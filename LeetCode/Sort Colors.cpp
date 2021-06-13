class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), i=0;
        int l=0,r=n-1;
        while(i<=r){
          if(nums[i]==0){
              swap(nums[i],nums[l]);
              l++;
              i++;
          } 
             else if(nums[i]==1){
              i++;
          } 
           else{
              swap(nums[i],nums[r]);
              r--;
          }  
        }
       // return nums;
    }
};
