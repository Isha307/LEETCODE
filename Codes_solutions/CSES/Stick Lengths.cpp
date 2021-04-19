#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  ll arr[n],sum=0;
  for(ll i=0;i<n;i++)
  {
    cin>>arr[i];
    //sum+= arr[i];
  }
  sort(arr, arr+n);
  ll best =arr[n/2],total=0;
  for(ll i=0;i<n;i++)
  {
    total = total + abs(arr[i]-best);
  }
  cout << total << "\n";

  return 0;
}
