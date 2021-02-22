//question link:-> https://codeforces.com/contest/1486/problem/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll x[1000000],y[1000000];
        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        sort(x,x+n); sort(y,y+n);
        if(n%2!=0) cout<<"1"<<endl;
        else cout<<(x[n/2]-x[(n/2)-1]+1)*(y[n/2]-y[(n/2)-1]+1)<<endl;
    }
    return 0;
}
