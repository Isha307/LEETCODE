class Solution {
public:
    vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
            return vector<string>();
        }
        vector<string> words{ " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        deque<string> q;
        q.push_back("");

        for (char digit : digits) {
            int d = digit - '0';
            cout<<q.size()<<endl;
            for (int i = q.size(); i > 0; i--) {
                string token = q.front();
                q.pop_front();
                for (char ch : words[d-1]) {
                    q.push_back(token + ch);
                }
            }
        }
        return vector<string>(q.begin(), q.end());
    }
};
