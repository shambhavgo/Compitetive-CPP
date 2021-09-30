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
        string s;cin>>s;
        int flag=0;
        int r=0,g=0;
        int a[26]={0};
        for(auto i:s)a[i-'a']++;
        // for(int i=0;i<26;i++)cout<<a[i]<<" ";
        // cout<<endl;
        for(int i=0;i<26;i++)
        {
            if(a[i]>1)
            {
                r++,g++;
            }
            else if(a[i]==1)
            {
                if(flag==1)g++;
                else r++;
                flag = 1 - flag;
            }
            // cout<<r<<" "<<g<<endl;
        }
        cout<<min(r,g)<<endl;
    }

    return 0;
}
