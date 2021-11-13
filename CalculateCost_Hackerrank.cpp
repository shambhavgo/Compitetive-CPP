#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t ;
    cin >> t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll> a(n);
        for(auto &i:a)cin>>i;
        unordered_map<ll,ll> mp;
       for(auto i:a)mp[i]++;
       ll ans=0;
       if(mp.size()>k)
       {ans=mp.size()-k;
       ans*=x;}
       cout<<ans<<'\n';
    }
return 0;
}