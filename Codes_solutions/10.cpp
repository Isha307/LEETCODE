#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
  ll t; cin>>t;
  while(t--)
  {
  	ll count=0;
  	ll n; cin>>n;
    for(ll i=1;i<=n;i=i*10+1)
    	for(ll j=1;i*j<=n&&j<=9;j++)
    		count++;

    cout<<count<<endl;
  }
  return 0;
}
