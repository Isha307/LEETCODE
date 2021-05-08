#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
 
int main(){
  ll n; cin>>n;
   if(n!=3 && n!=2)
   {
    for(ll i=n;i>0;i--)
    {
        if(i%2!=0) cout<<i<<" ";
    }
    for(ll i=n;i>0;i--)
    {
        if(i%2==0) cout<<i<<" ";
    }
   }
   else cout<<"NO SOLUTION";
   return 0;
}
