class Solution {
public:
    void par(string& s, int start, vector<string>& arr, vector<vector<string>>& arrs) {
        int n = s.length();
        if (start == n) {
            arrs.push_back(arr);
        } else {
            for (int i = start; i < n; i++) {
                if (isPalindrome(s, start, i)) {
                    arr.push_back(s.substr(start, i - start + 1));
                    cout<<s.substr(start, i - start + 1)<<endl;
                    par(s, i + 1, arr, arrs);
                    arr.pop_back();
                }
            }
        }
    }
    
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> arrs;
        vector<string> arr;
        par(s, 0, arr, arrs);
        return arrs;
    }
};
