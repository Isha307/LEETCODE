#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll n, x;
  cin>>n>>x;
  vector<pair<int,int>> a(n);
  for(ll i=0;i<n;i++)
  {
    cin>>a[i].first;
    a[i].second = i+1;
  }
  sort(a.begin(), a.end());
  ll i=0,j=n-1;
  while(i<j)
  {
    if(a[i].first + a[j].first == x){
      cout<<a[i].second<<" "<< a[j].second;
      return 0;
    }
    else if (a[i].first + a[j].first < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
 cout<<"IMPOSSIBLE";
  return 0;
}
