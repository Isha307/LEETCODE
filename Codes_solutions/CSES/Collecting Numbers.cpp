#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[10000001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,l=1;
  
  cin>>n;
  ll ind[n+1]={0};
  for(ll i=1;i<=n;i++)
  {
    //cin>>arr[i];
    ll x; cin>>x;
    	ind[x] = i;
    }
    ll c = 1;
    for (ll i = 1; i <= n; i++) {
    	if (l > ind[i]) 
    		c++;
    	l = ind[i];
    }
    cout<<c;
}
