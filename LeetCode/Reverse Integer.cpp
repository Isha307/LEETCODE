class Solution {
public:
    int reverse(int x) {
        long long int y= abs(x);
        long long int num=0;
        while(y>0)
        {
         long long int rem=y%10;
        if(num*10 > INT_MAX) 
            return 0;
          num = num *10 +rem;
          y=y/10;          
        }
        if(x<0) return num*(-1);
        else return num;
    }
};
