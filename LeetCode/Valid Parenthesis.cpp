class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for (auto x:s)
        {
            if(x=='('  || x=='{'  || x=='[' )
              ch.push(x);
            else  
            {
                if(ch.empty() || (ch.top()=='(' && x!=')')|| (ch.top()=='{' && x!='}') || (ch.top()=='[' && x!=']')) return false;
                ch.pop(); 
            }
        }
        return ch.empty();
    }
};
