#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    int a[t],count=0;
    map<int,int> s;
    for(int i=0;i<t;i++) {
        cin>>a[i];
        s[a[i]]++;
    }
    for(auto x: s )
        count++;
    cout<<count;
return 0;
}
