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
        if((n/2)&1){
            cout << "NO"<< '\n';
        }
        else{
        vector<int> vectora,vectorb;
        bool temp=0;
        for(int i=1;i<=n/2;i++){
            if(temp)
            {
                vectorb.push_back(i);
                vectorb.push_back(n-i+1);
                temp= !temp;
            }
            else
            {
                vectora.push_back(i);
                vectora.push_back(n-i+1);
                temp= !temp;
            }
        }
        sort(vectorb.begin(),vectorb.end());
        sort(vectora.begin(),vectora.end());
        cout << "YES" << '\n';
        for(int i=0;i<vectora.size();i++){
            cout << vectora[i] << " ";
        }
        cout << '\n';
        for(int i=0;i<vectorb.size();i++){
            cout << vectorb[i] << " ";
        }
        cout << '\n';
    }
    }

    return 0;
}   