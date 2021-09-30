#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(ll n,ll a[],bool visited[],bool visit[],ll &ans,ll sum[],ll id,ll prev)
{
    sum[id] = prev + id;
    visit[id] = true;
    visited[id] = true;
    if(a[id] == -1)
    {
        sum[id] = 0;
        visited[id] = false;
        return;
    }
    if(!visit[a[id]])
    dfs(n,a,visited,visit,ans,sum,a[id],sum[id]);
    else if(visited[a[id]])
    {
        ans = max(ans,sum[id]-sum[a[id]]+a[id]);
    }
    sum[id] = 0;
    visited[id] = false;
    return;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i;
        ll a[n],sum[n];
        ll ans = -1;
        bool visited[n],visit[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum[i] = 0;
            visited[i] = false;
            visit[i] = false;
        }
        for(i=0;i<n;i++)
        {
            if(!visit[i])
            dfs(n,a,visited,visit,ans,sum,i,0);
        }
        cout<<ans<<endl;
    }
	return 0;
}