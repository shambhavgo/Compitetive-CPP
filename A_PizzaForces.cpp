#include<bits/stdc++.h>
    using namespace std;
    #define inp(k)           ll k;cin>>k;
    #define in2(n,k)       ll n, k; cin>>n;cin>>k;
    #define in3(n,k,r)       ll n, k,r; cin>>n;cin>>k;cin>>r;
    #define ll long long int
    #define dl double
    #define ch char
    #define f(i,a,b) for(ll i=a;i<b;i++)
    #define rf(i,a,b) for(ll i=a-1;i>=b;i--)
    #define Godspeed                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define vpl vector< pair<ll,ll> >
    #define vpi vector< pair<int,int> >
    #define vi vector<int>
    #define vl vector<ll>
    #define vdl vector<dl>
    #define vch vector<char>
    #define pb push_back
    #define mp make_pair
    #define fr first
    #define se second
    #define PI 3.14159265
const ll N = 500005;
const ll modls = 1e9 + 7;

ll powermodls(ll x, ll y, ll m)
{
    ll res = 1;
    x = x % m;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

int32_t main() {
    Godspeed;
    inp(n);
    ll a[n];
    vpl v;
    vl ans(n,0);
    f(i,0,n)
    {
        cin>>a[i];
        v.pb(mp(i,a[i]));
    }
    int t=0;
    while(v.size()>1)
    {
        vector<int>todel;
        for(int i=0;i<v.size();i+=2)
        {
            if(v[i].second>v[i+1].second)
            {
                ans[v[i+1].first] = t;
                todel.pb(i+1);
            }
            else
            {
                ans[v[i].first] = t;
                todel.push_back(i);
            }
        }
        rf(i,todel.size(),0)
        v.erase(v.begin()+todel[i]);
        t++;
        // f(i,0,v.size())cout<<v[i].first<<" "<<v[i].second<<" , ";
        // cout<<endl;
    }
    ans[v[0].first]=t;
    f(i,0,n)cout<<ans[i]<<" ";
    return 0;
}
