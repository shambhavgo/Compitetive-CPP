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
        ll n,k,i;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll> vectorw,vectorb;
        f(i,0,n)
        {
            int fl=0;
            while(i<n&&s[i]=='0')
            {
                i++;fl=1;
            }
            if(fl)vectorb.pb(i-1);
            if(i==n)break;
            fl=0;
            while(i<n&&s[i]=='1')
            {
                i++;fl=1;
            }
            if(fl)vectorw.pb(i-1),i--;
        }
        bool cond;
        if(s[0]!='1')
        {
            cond =(int)vectorw.size()>=(k+1)/2&&(int)vectorb.size()>=k/2+1;
            if(!cond)
            {
                cout<<"-1\n";
                    
            }
            else 
            {
                if(!(k&1))
                {
                    cout<<vectorb.back()+1<<endl;
                    
                }
                else cout<<vectorw.back()+1<<endl;
            }
            
        }
        else
        {
            cond = (int)vectorb.size()>=(k+1)/2&&(int)vectorw.size()>=k/2+1;
            if(!cond)
            {
                cout<<"-1\n";
                
            }
            else 
            {
                cond = k&1;
                if(!cond)
                {
                    cout<<vectorw.back()+1<<endl;
                    
                }
                else cout<<vectorb.back()+1<<endl;
                    
            }
                
        }
    }

    return 0;
}   