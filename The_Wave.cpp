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
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] < x && arr[m+1] > x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int32_t main() {
    Godspeed;
    ll n,q;
    cin>>n>>q;
    int a[n];
    sort(a,a+n);
    map<int,int>m;
    f(i,0,n){cin>>a[i];m[a[i]]=1;}
    while (q--) {
        inp(s);
        bool flag=0;
        int ind=-1;
        
        if(m[s]==1)
        {
            cout<<0<<endl;
            continue;
        }
        
        if(s<a[0])
        {
            cout<<"POSITIVE"<<endl;
            continue;
        }
        if(s>a[n-1])
        {
            if(n%2==0)
            {
                cout<<"POSITIVE"<<endl;
            }
            else
            {
                cout<<"NEGATIVE"<<endl;
            }
            continue;
        }
        ind =binarySearch(a,0,n,s);
            // cout<<ind<<endl;
            if(flag)continue;
            if(ind%2==0)cout<<"NEGATIVE"<<endl;
            else cout<<"POSITIVE"<<endl;
    }

    return 0;
}
