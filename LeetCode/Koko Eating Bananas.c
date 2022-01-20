class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int l=1, g=1000000;
        while(l<g){
            int m = (l+g)/2,sum=0;
            for(int x:p)
                sum += (x + m - 1) / m;
            if(sum> h) l=m+1;
            else g=m;
        }
        return l;
    }
};
