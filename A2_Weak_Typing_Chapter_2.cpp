#include<bits/stdc++.h>
    using namespace std;
    #define inp(var1 )           ll var1 ;cin>>var1 ;
    #define in2(n,var1 )       ll n, var1 ; cin>>n;cin>>var1 ;
    #define in3(n,var1 ,r)       ll n, var1 ,r; cin>>n;cin>>var1 ;cin>>r;
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
const ll mod = 1e9 + 7;

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
    int out=1;
    while (q--) 
    {
        string s,t="";
        ll n,solution=0;
        ll location=-1,f=0;
        cin>>n>>s;
        vl temp;
        vl vector1;
        ll var1 ;
        f(i,0,n)temp.pb(0);
        vl vector2;
        vector2.pb(0);
        bool cond1,cond2;
        for (int i=0;i<n;i++){
            cond1 = s[i]=='O';
            cond2 = s[i]=='X';
            if(cond1)
            {
                location=i;
                f=1;
                break;
            }
            else if (cond2) {
                location=i;
                f=0;
                break;
            }
        }
        if (location==-1){
            cout<<"Case #"<<out++<<": 0"<<endl;
            continue;
        }
        vector2.pb(location+1);
        for (int i=location+1;i<n;i++){
            cond1 = f==0;
            cond2 = s[i]=='O';
            if (!cond1 && s[i]=='X')
                {
                    temp[i]=temp[i-1]+1;
                    f=0;
                    vector2.pb(i+1);
                }
            else if (cond1 && cond2)
                {
                    temp[i]=temp[i-1]+1;
                    f=1;
                    vector2.pb(i+1);
                }
            else 
                {
                    temp[i]=temp[i-1];
                    if (s[i]=='X' || s[i]=='O'){
                        vector2.pop_back();
                        vector2.pb(i+1);
                    }	
                }
        }
        var1 =temp[n-1];
        vector1.resize(var1 +1);
        vector1[0]=0;
        
        if ( var1 >0 ) 
            vector1[1]=vector2[1];
        f(i,2,var1 +1){
            vector1[i]=(vector1[i-1]+vector2[i]%mod)%mod;
        }
        int j=0;
        f(i,1,n){
            if(temp[i]<=temp[i-1])solution=(solution + vector1[j]%mod)%mod;
            else
            {
                j++;
                if (j<=var1 )
                    solution = (solution + vector1[j]%mod)%mod;
            }
        }
        cout<<"Case #"<<out++<<": "<<solution<<endl;
    }

    return 0;
}
