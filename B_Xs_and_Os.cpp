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
    for(int z=1;z<=q;z++) {
        inp(n);
        char a[n][n];
        f(i,0,n)f(j,0,n)cin>>a[i][j];
        int x[n][2],y[n][2];
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        int t;
        f(i,0,n)
        {
            f(j,0,n)
            {
                if(a[i][j]=='X')x[i][0]++;
                else if(a[i][j]=='.')x[i][1]++;
            }
        }
        f(j,0,n)
        {
            f(i,0,n)    
            {
                if(a[i][j]=='X')y[j][0]++;
                else if(a[i][j]=='.')y[j][1]++;
            }
        }
        // f(i,0,n)cout<<x[i][0]<<" "<<x[i][1]<<endl;
        // f(i,0,n)cout<<y[i][0]<<" "<<y[i][1]<<endl;
        int ans=INT_MIN;
        f(i,0,n)
        {
            if(x[i][1]==(n-x[i][0]))    ans = max(ans,x[i][0]);
            if(y[i][1]==(n-y[i][0]))    ans = max(ans,y[i][0]);
        }
        t=0;
        vector<int>r,c;
        f(i,0,n)
        {
            if(x[i][0]==ans && x[i][1]==(n-x[i][0]))
            {
                t++;
                r.pb(i);
            }
            if(y[i][0]==ans && y[i][1]==(n-y[i][0]))
            {
                t++;
                c.pb(i);
            }
        }
        if(ans == INT_MIN)
        {
            cout<<"Case #"<<z<<": "<<"Impossible"<<endl;
            continue;
        }
        ans = n - ans;
        if(ans==1)
        {
            set<pair<int,int>>s;
            for(auto i:r)
            {
                f(j,0,n)
                {
                    if(a[i][j]=='.'){s.insert({i,j});break;}
                }
            }
            for(auto i:c)
            {
                f(j,0,n)
                {
                    if(a[j][i]=='.'){s.insert({j,i});break;}
                }
            }
            t=s.size();
        }
        cout<<"Case #"<<z<<": "<<ans<<" "<<t<<endl;
    }

    return 0;
}
