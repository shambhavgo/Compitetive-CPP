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
    ll test;
    cin >> test;

    while (test--) {
        ll n,x,t;
        cin>>n>>x>>t;
        ll v[n][2];
        unordered_map<ll,ll>m;
        for(ll i=0;i<n;i++)m[i*x]=1;
        ll ans=0;
        for(ll i=0;i<n;i++)v[i][0]=i*x,v[i][1]=i*x+t;
        for(ll i=0;i<n;i++)
        {
            ll k = i*x+t;
            for(ll j = i*x+1 ; j<=k ;j++)
            {
                if(m[j]==1)ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
