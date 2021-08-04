class Solution {
public:
    bool isPalindrome(string s) {
        string s1,s2;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        
        for(int i=0;i<s.size();i++){
        if((s[i]>='A'&& s[i]<='Z') || (s[i]>='0'&& s[i]<='9') )
            s1+=s[i];
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        cout<<s1<<" "<<s2<<endl;
        if(s1==s2) return true;
        return false;
    }
};
