class Solution {
public:
    int mySqrt(int x) {
        long long int r=x;
        while(r*r>x)
        {
         r = (r+x/r)/2;
        }
        return r;
    }
};
