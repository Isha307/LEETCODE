//Question's link:- https://codeforces.com/contest/1490/problem/C


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t; cin>>t;
	while(t--)
	{
     ll n,m,y,l=0; cin>>n;
     ll i=0, x=0;
     for(i=1;i*i*i<n;i++){
       m=i*i*i;
       x=n-m;
       y=cbrt(x);
       if(y*y*y==x) {l=1; break;}
 
     }
     if(l==1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   
	}
  
	return 0;
}
