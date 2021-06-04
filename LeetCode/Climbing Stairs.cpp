class Solution {
public:
    int climbStairs(int n) {
        long long int n1=1,n2=1,step=0;
        for(int i=1;i<=n;i++)
        {
            step = n1;
            n1=n2;
            n2=step+n2;
        }
        return n1;
    }
};
