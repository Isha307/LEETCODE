//https://codeforces.com/contest/1520/problem/A

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
  ll t; cin>>t;
  while(t--)
  {
  	ll n; cin>>n;
  	string s;
  	map<int,int> a;
  	cin>>s; //cout<<s<<endl;
  	a[s[0]]=1;
  	ll flag=0;
  	for(ll i=1;i<=n;i++)
  	{
  		//cout<<s[i]<<" "<<a[s[i]]<<endl;
  		if(s[i]!=s[i-1])
  			a[s[i]]++;
  		if(a[s[i]]>1)
  			{flag=1;
  	          break;}

  	}
  	
  	if(flag==1)cout<<"No"<<endl;
  	else cout<<"YES"<<endl;
  }
  return 0;
}

