#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define mod 1000000007
 
int main(){
  ll n; cin>>n;
  ll ans =0;
  for(ll i=5;n/i >=1; i*=5)
    ans+=(n/i);
  cout<<ans;
}
