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

    /*vl v[10005];
    ll cnt=0;
    ll a[51][51]={0};
    bool visited[10005]={0};
    void dfs(ll u)
    {
        visited[u]=1;
        f(i,0,v[u].size())
        {
            ll f=v[u][i];
            if(!visited[f])
            {
                dfs(f);
            }
        }
    }*/

bool comp(pair<long long int ,long long int > &a,pair<long long int ,long long int > &b)
{
	return a.second > b.second;
}

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
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
void reverseArray(ll arr[], ll start, ll end)
{
    if (start >= end)
    return;

    ll temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}
int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
ll findlcm(int arr[], int n)
    {
        ll ans = arr[0];
        for (int i = 1; i < n; i++)
            ans = (((arr[i] * ans)) /
                    (gcd(arr[i], ans)));
        return ans;
    }
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
ll cubic_root(ll x)
    {
        ll l = 1 , r=1000001;
        while(l<=r){
            ll m = (l+r)/2;
            if((m*m*m) == x)
                return m;
            else if(m*m*m > x)
                r = m-1;
            else
                l = m + 1;
        }
        return -1;
    }

int32_t main() {
    Godspeed;
    ll test;
    cin >> test;

    while (test--) {
        
    }

    return 0;
}
