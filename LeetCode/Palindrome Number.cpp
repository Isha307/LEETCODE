class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;
    else
      {
        long long int y= abs(x);
        long long int num=0;
        while(y>0)
        {
         long long int rem=y%10;
          num = num *10 +rem;
          y=y/10;          
        }
        if(x==num)  return true;
        else  return false;
    }
    }
};
