#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
  ll n; cin>>n;
  ll arr[n];
  map<ll,ll> f;
  for(ll i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  ll i=0,j=0,len=0,curr=0;
  while(j<n)
    {
      //cout<<f[arr[j]]<<" "<<curr<<" "<<len<<endl;;
      //cout
      if(f.find(arr[j]) == f.end() || f[arr[j]]==0)
      {
        len++;
        f[arr[j]]++;
        curr=max(len,curr);
        j++;
      }
      else{
        len--;
        f[arr[i]]--;
        i++;
      }
    }
  cout<<curr;
  return 0;
}
