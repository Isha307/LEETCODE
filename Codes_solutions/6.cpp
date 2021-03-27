//Question - https://codeforces.com/problemset/problem/1506/G

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define pll pair<ll, ll> 
 
int main()
{
    ll t; cin >> t;
    while (t--) {
    string s; cin >> s;
    map<char, ll> m;
    map<char, bool> c;
    for (auto x : s)
        m[x]++;

    string ans;   
    for (auto x : s) {
       // cout<<m[x]<<endl;
        --m[x];
        if (c[x]) {
           // cout<<x<<" "<<check[x]<<" ";
            continue;}
        
        while (!ans.empty() && ans[ans.size() - 1] < x && m[ans[ans.size() - 1]] > 0) {
            c[ans[ans.size() - 1]] = false;
            ans.pop_back();
        }
        
        ans += x;
        c[x] = true;
    }
    
    cout << ans << endl;
    }
 return 0;
}
