// Question - https://codeforces.com/contest/1493/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t; cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    ll count=n-k+k/2;  
    cout<<count<<endl;
    ll a=count+1;
    while(a--)
    {
        if(n==k)
            {n--;
            continue;
        }
 
        cout<<n<<" ";
        n--;
    }
        cout<<endl;     
    }
}
