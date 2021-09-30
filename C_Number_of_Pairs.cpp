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
ll count_ranged_pairs(ll x[],ll n,ll a,ll b){
    sort(x,x+n);

    ll output[n],output2[n];
    memset(output,0,sizeof(output));
    memset(output2,0,sizeof(output2));

    ll i=0, j = n-1;
    while (i - j <= 0){
      if (x[i] + x[j] >= a){
        output[j] = i;
        j -= 1;}
      else
        {output[i] = j + 1;
        i += 1;}
}
    i=0, j = n-1;
    while (i-j <= 0){
      if (x[i] + x[j] <= b)
        {output2[i] = j;
        i += 1;}
      else{
        output2[j] = i-1;
        j -=1;
        }
    }
    ll ans=0;
    f(i,0,n)
    {
        if(i>=output[i] && i<=output2[i])
        ans+=output2[i]-output[i];
        else
        ans+=output2[i]-output[i]+1;
    }
    return ans/2;
    // answer = [o2 - o + 1 - (o <= i <= o2) for i, (o, o2) in enumerate(zip(output, output2))]
    // return sum(answer)/2
}
int32_t main() {
    Godspeed;
    ll test;
    cin >> test;

    while (test--) {
        in3(n,l,r);
        ll arr[n];
        f(i,0,n){cin>>arr[i];}
        ll c=0;
        // unordered_map<ll, ll> m;
        // for (ll i = 0; i < n; i++)
        // m[arr[i]]++;

        // f(sum,l,r+1)
        // {
        //     ll twice_count = 0;
        //     for (ll i = 0; i < n; i++) 
        //     {
        //         twice_count += m[sum - arr[i]];
        //         if (sum - arr[i] == arr[i])
        //             twice_count--;
        //     }
        //     c+= twice_count / 2;
        // }
        // cout<<c<<endl;
        c=count_ranged_pairs(arr,n,l,r);
        cout<<c<<endl;
    }

    return 0;
}


