#include<bits/stdc++.h> 
using namespace std; 
 
int main(){
    string s;
    cin>>s;
    int sum=1, best=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==s[i+1] && i<s.length()-1)
            sum++;
        else
        {
            best= max(sum,best);
            sum=1;
        }
    }
    cout<<best<<endl;
}
