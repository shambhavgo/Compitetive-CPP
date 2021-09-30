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

ll powermodls(ll xt, ll y, ll m)
{
    ll ans = 1;
    xt = xt % m;
    if (xt == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            ans = (ans * xt) % m;
        y = y >> 1;
        xt = (xt * xt) % m;
    }
    return ans;
}
int binarySearch(int lop[], int l, int r, int xt)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (lop[m] < xt && lop[m+1] > xt)
            return m;
        if (lop[m] < xt)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int helper(vector<vector<ll>>&res, ll l, ll r, vector<ll>lop)
{
	if(l>r)helper(res,0,r+1,lop);
	else if(r==lop.size())return 0;
	else
	{
		vector<ll>xt;
		for(ll i=l;i<=r;i++)
		{
			if(lop[i]-1<=r && lop[i]-1>=l)xt.push_back(lop[i]);
		}
		res.push_back(xt);
		helper(res,l+1,r,lop);
	}
	return 0;
}
bool test(vector<ll>lop)
{
    ll n=lop.size();
    if(n==0||n==1)return true;
    bool cond;
    for (ll i=1;i<n;i++)
    {
        cond = lop[i]<lop[i-1];
    	if (cond)return false;
    }
    return true;
}
int32_t main() {
    Godspeed;
    ll q;
    cin>>q;
    ll cnt=0;
    while (q--) 
    {
            cnt=0;
            inp(n);
            vector<ll>lop(n);
            f(i,0,n)cin>>lop[i];
            
            vector<vector<ll>>ans;
            helper(ans,0,0,lop);
            sort(ans.begin(),ans.end());
            for(auto i:ans)
            {
                if(test(i))cnt++;
                else if(i.size()==0)cnt++;
            }
            cout<<cnt<<endl;
    }

    return 0;
}   

