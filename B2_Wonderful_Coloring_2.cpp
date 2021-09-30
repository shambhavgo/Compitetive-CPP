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
        in2(n,k);
        int a[n];
        f(i,0,n)cin>>a[i];
        int ans[n];
        memset(ans,0,sizeof(ans));
        map<int,vector<int>>m;
        f(i,0,n)
        {
            m[a[i]].push_back(i);
        }
        int t=1;
        int count = 0;
        bool flag=0;
        for(auto i:m)
        {
            flag=0;
            f(j,0,k)
            {
                if(j<i.second.size())
                {
                    ans[i.second[j]] = t;
                    count++;
                    t++;
                    if(t==k+1)
                    {
                        t=1;
                        if(n-count<k)
                        {
                            flag=1;break;
                        }
                    }
                }
            }
            if(flag)break;
        }
        f(i,0,n)cout<<ans[i]<<" ";
        cout<<endl; 
    }

    return 0;
}
