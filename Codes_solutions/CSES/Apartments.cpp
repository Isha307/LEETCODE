#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for(i,n) for(int i=0;i<n;i++)
int main(){
    
    ll n,m,k; cin>>n>>m>>k;
    ll a[n],b[n],c=0;
    for(i,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i,m)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            c++; i++; j++;
        }
        else if(a[i]>b[j])
            j++;
        else 
            i++;
    }
     cout<<c<<endl;
return 0;
}
