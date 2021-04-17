#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int n, x, y, maxi = 0, curr = 0;
  vector<pair<int, bool>> arr;
  cin >> n;
  while (n--)
  {
    cin >> x >> y;
    arr.push_back(make_pair(x, true));
    arr.push_back(make_pair(y, false));
    //cout<<arr<<endl;
  }
  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++)
  {
   // cout<<arr[i].first<<" "<<arr[i].second<<endl;
    if(arr[i].second) curr++;
    else curr--;
    //cout<<curr<<endl;
    maxi = max(maxi, curr);
  }
  cout << maxi;
  return 0;
}
