#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  ll best = arr[0], sum=arr[0];
  for (ll k = 1; k < n; k++) {
  sum = max(arr[k],sum+arr[k]);
  best = max(best,sum);
  }
  cout << best << "\n";

  return 0;
}
