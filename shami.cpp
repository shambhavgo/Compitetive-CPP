#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int mod = 10e9 + 7;
    int n;
    cin>>n;
    int v[n+1];
    for(int i=1; i<n+1; i++)cin>>v[i];
    int q;
    cin>>q;
    int X[q],L[q],R[q];
    for(int i=0; i<q; i++)cin>>X[i];
    for(int i=0; i<q; i++)cin>>L[i];
    for(int i=0; i<q; i++)cin>>R[i];
    int sum=0;
    int mn,loc;
    for(int i=0; i<q; i++){
        mn = X[i]^v[L[i]]; 
        loc = L[i];
        for(int j=L[i];j<=R[i];j++){
            if(v[j]^X[i] < mn){
                loc=j;
                mn=v[j]^X[i];
            }
        }
        sum+=loc;
    }
    cout<<sum<<endl;
}