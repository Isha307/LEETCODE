class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size(), count=0;
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
         if(s[i]=='(') st.push(i);
         if(s[i]==')') {
             if(!st.empty()) st.pop();
             else s[i]='%';
         }      
        }
        //cout<<s<<endl;
         while (!st.empty()) {
           s[st.top()] = '%';
           st.pop();
        }
        
        s.erase(remove(s.begin(), s.end(), '%'), s.end());
      return s;
    }
};
