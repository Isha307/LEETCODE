#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define mod 1000000007

int main()
{
 string s,k;
 cin>>s;
 int count=0;
 bool a[26] ={false};
 for(char &c:s)
 {
    if(!a[c-'A'])
    {   
      a[c-'A']=true;
      count++;
    }
    else {
      k+=c;
      a[c-'A']=false;
      count--;
    }
 }
 if(count>1) {
    cout<<"NO SOLUTION"<<endl;
    return 0;
  }
 cout<<k;
 for (char c = 'A'; c <= 'Z'; c++)
 {
    if(a[c-'A'])
        cout<<c;
 }
 reverse(k.begin(),k.end());
 cout<<k;
 return 0;
}
