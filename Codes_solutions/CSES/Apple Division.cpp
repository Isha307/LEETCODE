#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;

int a[20];
int tot, n;
int min_diff;
vector<int> subset;

void search(int k) {
  if (k == n) {
    int sum1 = 0;
    int sum2 = tot;
    for (auto x : subset) {
      sum1 += a[x];
      sum2 -= a[x];
    }
    min_diff = min(min_diff, abs(sum2 - sum1));
  }
  else {
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
  }
}

int32_t main () {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    tot += a[i];
  }
  min_diff = tot;
  search(0);
  cout << min_diff;
  
  return 0;
}
