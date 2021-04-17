#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int n, x, y,sum=0,curr=0;
  vector<pair<int, int>> arr;
  cin >> n;
  while (n--)
  {
    cin >> x >> y;
    arr.push_back(make_pair(y,x));
  }
  sort(arr.begin(), arr.end());

  for (auto x: arr)
  {
     if(x.second>=curr)
     {
      sum++;
      curr = x.first;
     }
    
  }
  cout << sum;
  return 0;
}
