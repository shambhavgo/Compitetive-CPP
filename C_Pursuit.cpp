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
        inp(n);
        ll t=n;
        vl v1,v2;
        ll s1=0,s2=0;ll x;
        f(i,0,n)
        {
            cin>>x;
            v1.pb(x);
        }
        f(i,0,n)
        {
            cin>>x;
            v2.pb(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<ll>sum1,sum2;
        sum1.pb(v1[0]);
        f(i,1,n)
        sum1.push_back(sum1[i-1]+v1[i]);

        sum2.pb(v2[0]);
        f(i,1,n)
        sum2.push_back(sum2[i-1]+v2[i]);

        ll curr = n-n/4;
        // cout<<curr<<endl;
        if(sum1.size()-1-curr<0)s1 = sum1[sum1.size()-1];
        else s1 = sum1[sum1.size()-1] - sum1[sum1.size()-1-curr];
        if(sum2.size()-1-curr<0)s2 = sum2[sum2.size()-1];
        else s2 = sum2[sum2.size()-1] - sum2[sum2.size()-1-curr];
        // for(auto i:sum1)cout<<i<<" ";
        // cout<<endl;
        // for(auto i:sum2)cout<<i<<" ";
        // cout<<endl;
        // cout<<"s1 & s2 = "<<s1<<" "<<s2<<endl;
        if(s1>=s2)
        {
            cout<<0<<endl;continue;
        }
        while(s1<s2)
        {
            sum1.pb(sum1[sum1.size()-1]+100);
            n++;
            curr = n-n/4;
            if(sum1.size()-1-curr<0)s1 = sum1[sum1.size()-1];
            else s1 = sum1[sum1.size()-1] - sum1[sum1.size()-1-curr];
            if(sum2.size()-1-curr<0)s2 = sum2[sum2.size()-1];
            else s2 = sum2[sum2.size()-1] - sum2[sum2.size()-1-curr];
            // cout<<"s1 & s2 = "<<s1<<" "<<s2<<endl;
        }
        cout<<n-t<<endl;
    }

    return 0;
}
