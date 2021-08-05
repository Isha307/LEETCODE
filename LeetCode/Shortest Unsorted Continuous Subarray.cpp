class Solution {
public:
    int findUnsortedSubarray(vector<int>& num1) {
        vector<int> v,num2 = num1;
        sort(num1.begin(),num1.end());
        for(int i=0;i<num1.size();i++){
          if(num1[i]!=num2[i]) v.push_back(i);
        }
        sort(v.begin(),v.end());
        int k= v.size();
        if(v.size()==0) return 0;
        return (v[k-1]-v[0]+1);
    }
};
