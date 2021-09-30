#include<bits/stdc++.h>
    using namespace std;
    #define inp(k)            ll k;cin >> k;
    #define in2(n,k)        ll n, k; cin >> n;cin >> k;
    #define in3(n,k,r)        ll n, k,r; cin >> n;cin >> k;cin >> r;
    #define ll long long int
    #define dl double
    #define ch char
    #define f(i,a,b)  for(ll i = a;i<b;i++) 
    #define rf(i,a,b)  for(ll i = a-1;i> = b;i--) 
    #define Godspeed                ios_base::sync_with_stdio(false) ;cin.tie(NULL) ;cout.tie(NULL) ;
    #define vpl vector< pair<ll,ll> >
    #define vpi vector< pair<int,int> >
    #define vi vector<int>
    #define vl vector<ll>
    #define vdl vector<dl>
    #define vch vector<char>
    #define pb push_back
    #define map make_pair
    #define fr first
    #define se second
    #define PI 3.14159265
const ll N  =  500005;
const ll modls  =  1e9 + 7;


int main(){
Godspeed;
ll t;
cin >> t;
while(t--) 
{
    ll n;
    cin >> n;
    ll array1[n];
    ll array2[n-1];
    f(i,0,n) cin >> array1[i];
    f(i,0,n-1) cin >> array2[i];
    ll temap=INT_MAX;
    

    if(n == 2) 
    {
        temap = min(array2[0]-array1[0],array2[0]-array1[1]);
        if(array2[0]-array1[0]<0)  
            temap = array2[0]-array1[1];
        else if(array2[0]-array1[1]<0) 
            temap = array2[0]-array1[0];
    }

    else
    {
        sort(array1, array1 + n) ;
        sort(array2, array2 + n-1) ;
        unordered_map<ll,ll> map;
        ll m = 0;
        f(i,0,n-1) 
        {
            map[array2[i]-array1[i]]++;
            if(map[array2[i]-array1[i]] == n-1 && (array2[i]-array1[i])!=0)  
                m = array2[i]-array1[i];
        }
        f(i,1,n) 
        {
            map[array2[i-1]-array1[i]]++;
            if(map[array2[i-1]-array1[i]] == n-1 && (array2[i-1]-array1[i])!=0)  
                m = array2[i-1]-array1[i];
        }
        temap = m;
    }
    cout<<temap<<"\n";
}
return 0;
}