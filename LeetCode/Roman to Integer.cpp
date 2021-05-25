class Solution {
public:
    int romanToInt(string s) {
        map <char, int> sum {
            {'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500}, {'M', 1000},
        };
        int n = s.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (sum[s[i]] < sum[s[i+1]]) result -= sum[s[i]]; 
            else  result += sum[s[i]]; 
        }       
        return result;
    }
};
