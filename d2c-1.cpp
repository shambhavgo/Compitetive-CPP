#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    bool dp[n+1];
    memset(dp,0,sizeof(dp));
    int x,y;
    int sz[n+1];
    memset(sz,1,sizeof(sz));
    sz[0]=0;
    dp[1]=1;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(sz[x])
        {
            sz[x]--;sz[y]++;
            if(dp[x])dp[y]=1;
        }
    }
    int ans=0;
    for(int i=2;i<n+1;i++)if(sz[i])ans+=dp[i];
    cout<<ans;
    return 0;
}