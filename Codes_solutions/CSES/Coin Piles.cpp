#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define mod 1000000007
 
int main(){
  ll n; cin>>n;
  
  while(n--)
  {
    ll ans =0,a,b;
    cin>>a>>b;
    ans= a+b;
    if(ans%3==0 && min(a,b)*2 >= max(a,b))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  //cout<<ans;
}
