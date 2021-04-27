#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
  int n, curr;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cin >> curr;
    auto it = upper_bound(arr.begin(), arr.end(), curr);
    if (it == arr.end())
    {
      arr.push_back(curr);
    }
    else
    {
      *it = curr;
    }
  }
  cout << arr.size();
  return 0;
}
