// Question - https://codeforces.com/contest/1493/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll rev_valid(ll tt[], ll h, ll m) {
  for (ll i = 0; i < 4; i++) {
    if(tt[i] == 2) {
      tt[i] = 5;
    }
    else if (tt[i] == 5) {
      tt[i] = 2;
    }
  }
  ll rev_hh = tt[3] * 10 + tt[2];
  ll rev_mm = tt[1] * 10 + tt[0];
  //cout << "reverse = " << rev_hh << " " << rev_mm << endl;
  if (rev_hh < h && rev_mm < m) {
    return 1;
  }
  return 0;
}


int main () {
  ll t; cin >> t;
  set<int> s;
  s.insert(0);
  s.insert(1);
  s.insert(2);
  s.insert(5);
  s.insert(8);
  
  while (t--) {
    ll h, m;
    cin >> h >> m;
    char a1,a2,a3,a4,a5;
    cin >> a1 >> a2>> a4>>a4>>a5;
    ll hh = (a1 - '0') * 10;
    hh += (a2 - '0');
    ll mm = (a4 - '0') * 10;
    mm += (a5 - '0');
    pair<ll, ll> ans;
    ans.first = 0;
    ans.second = 0;
    ll k = 0;
    
    set<pair<ll, ll>> valid;
    for (ll i = hh; i < h; i++) {
      if (i == hh)
      for (ll j = mm; j < m; j++) {
        ll tempi = i, tempj = j;
        ll tt[4];
        
        tt[0] = (tempi / 10);
        tt[1] = (tempi % 10);
        
        tt[2] = (tempj / 10);
        tt[3] = (tempj % 10);
        
        if ((s.count(tt[0])) && (s.count(tt[1])) && (s.count(tt[2])) && (s.count(tt[3])) && rev_valid(tt, h, m)) {

          ans.first = i;
          ans.second = j;
          k = 1;
          break;
        }
      }
      else {
        for (ll j = 0; j < m; j++) {
          ll tempi = i, tempj = j;
          ll tt[4];
          
          tt[0] = (tempi / 10);
          tt[1] = (tempi % 10);
          
          tt[2] = (tempj / 10);
          tt[3] = (tempj % 10);
          
          if ((s.count(tt[0])) && (s.count(tt[1])) && (s.count(tt[2])) && (s.count(tt[3])) && rev_valid(tt, h, m)) {
            ans.first = i;
            ans.second = j;
            k = 1;
            break;
          }
        }
      }
      if (k) {
        break;
      }
    }
    int H = ans.first;
    int M = ans.second;
    if (H < 10) {
      cout << 0;
    }
    cout << H << ":";
    if (M< 10) {
      cout << 0;
    }
    cout << M << endl;
  }
  
  return 0;
}
