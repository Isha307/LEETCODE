
//Question link :- https://codeforces.com/contest/1486/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll i,n,sum=0;
        cin>>n;
        ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		ll now=0,ok=1;
		for(int i=0;i<n;i++){
			a[i]+=now;
			if(a[i]<i){
				ok=0;
				break;
			}
			now=a[i]-i;
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
    }
    return 0;
}
