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

ll powermodls(ll temp, ll y, ll m)
{
    ll res = 1;
    temp = temp % m;
    if (temp == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * temp) % m;
        y = y >> 1;
        temp = (temp * temp) % m;
    }
    return res;
}
int binarySearch(int arr[], int l, int r, int temp)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] < temp && arr[m+1] > temp)
            return m;
        if (arr[m] < temp)
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
    while (q--) 
    {       
        inp(n);
        
        string ans[2] = {"Alice", "Bob"};
        int turn = 0;
        bool flag=0;
        while(n){
            int mx = 1;
            if(n%2==0)
            {
                int temp = n;
                while(temp%2==0){
                    mx = mx * 2;
                    temp = temp/2;
                }
                
                if(mx > 2) {
                    flag=1;
                    cout<<ans[turn]<<endl;
                    break;
                }
                
                turn^=1;
                n=n/2;
            }
            else {
                n-=1;
                turn^=1;
            }
            
        }
        if(flag)continue;
        cout<<ans[turn^1]<<endl;
    }

    return 0;
}   

