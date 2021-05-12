#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
 
int main(){
  ll n; cin>>n;
  vector<int> v1,v2;
  ll sum = n*(n+1)/2;
  if(sum%2==0)
  {
    cout<<"YES"<<endl;
    if(!(n&1))
    {
      ll start=1,last=n,turn=1;
     while (start < last)
      { 
        if(turn)
        {
            v1.push_back(start);
            v1.push_back(last);
            turn=0;
        }
        else{
            v2.push_back(start);
            v2.push_back(last);
            turn=1;
        }
         start++;
         last--;
      }
    }
    else {
       ll rem = sum/2;
       bool vis[n]={false};
       vis[0]=true;
        for (int i = n; i >= 1; i--) {
            if (rem > i) {
                v1.push_back(i);
                vis[i] = true;
                rem -= i;
            }
 
            else {
                v1.push_back(rem);
                vis[rem] = true;
                break;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i])
                v2.push_back(i);
        }
    }
    cout << v1.size() << "\n";
    for (auto x: v1)
        cout << x << " ";
 
    cout << endl;
    cout << v2.size() << "\n";
    for (auto x : v2)
        cout << x << " ";
  }
  else cout<<"NO"<<endl;
}
