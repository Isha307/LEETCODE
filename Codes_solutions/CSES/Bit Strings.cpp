#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define mod 1000000007
 
int main(){
  ll n; cin>>n;
  ll ans =1;
  for(ll i=0;i<n;i++)
     ans  = (ans*2)%mod;
  cout<<ans<<endl;
}
