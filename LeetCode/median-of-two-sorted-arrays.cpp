class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> v; 
        for(int i=0 ; i<nums1.size() ; i++){ v.push_back(nums1[i]); }
        for(int j=0 ; j<nums2.size() ; j++){ v.push_back(nums2[j]); }
        sort(v.begin() , v.end());
        int k = v.size();
        if(k % 2 != 0)
            return double(v[k / 2 ]);
        else
            return  double((v[k / 2] +v [ (k / 2) - 1] )) / 2; 
    }
};
