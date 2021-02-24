// Question's lonk:- https://codeforces.com/contest/1490/problem/B


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
     ll n,count=0; cin>>n;
     ll a[n];
     ll x[3]={0};
     for(ll i=0;i<n;i++)
     {
     	cin>>a[i];
     	x[a[i]%3]++;
     }
    // cout<<x[0]<<x[1]<<x[2]<<endl;
     while((x[0]!=n/3) || (x[2]!=n/3) || (x[1]!=n/3))
     	{
     		count++;    		
            if(x[0]>=x[1] && x[0]>=x[2]){
            	x[1]++;
            	x[0]--;
            }else if(x[1]>=x[0] && x[1]>=x[2])
            {x[2]++;
            	x[1]--; }
            else if(x[2]>=x[0] && x[2]>=x[1])
            {x[2]--;
            	x[0]++; }
     }
     cout<<count<<endl;
	}
  
	return 0;
}
