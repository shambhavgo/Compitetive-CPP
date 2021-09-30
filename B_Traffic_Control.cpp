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
    ll q;
    cin>>q;
    int t=1;
    while (q--) 
    {
        in2(n,m);
        in2(a,b);
        ll right = a-(n+m-2);
        ll left = b-(n+m-2);
        bool cond = right>0 && left>0;
        if(!cond)
            cout<<"Case #"<<t<<": Impossible\n";
        else
        {
            vector<vector<ll>> sol(n,vector<ll>(m,1));
            sol[n-1][m-1] = right;
            sol[n-1][0] = left;
            cout<<"Case #"<<t<<": Possible\n";
            f(i,0,n)
            {
                f(j,0,m)
                    cout<<sol[i][j]<<" ";
                cout<<endl;
            }
        }
        t++;
    }

    return 0;
}
