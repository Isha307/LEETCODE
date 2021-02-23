//Question link :- https://codeforces.com/contest/1490/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n,i,count=0,x,y;
        cin>>n;
        cin>>x;
        for(i=1;i<n;i++)
        {
        	cin>>y;
        	ll l=max(x,y);
        	ll k = min(x,y);
        	while(2*k<l){
                k=2*k;
                count++;
        	}
            x=y;
        }
       cout<<count<<endl;
    }
    return 0;
}
