#include<bits/stdc++.h> 
using namespace std; 
 
int main(){
    long long int n;
    cin>>n;
    long long int arr[n],sum=0,total=0;
    for(int i=1;i<n;i++)
     { 
        cin>>arr[i];
        sum+=arr[i];
     }
    total= n*(n+1)/2;
    cout<<total-sum<<endl;
}
