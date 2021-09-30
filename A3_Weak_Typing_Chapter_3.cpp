#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};

int maxChainLen(struct val p[],int n)
{
    vector<int>dp(n,1);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)v.push_back({p[i].first,p[i].second});
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j].second<v[i].first)dp[i] = max(dp[i],1+dp[j]);
        }
    }
    // for(auto i:dp)cout<<i<<" ";
    // cout<<endl;
    return *max_element(dp.begin(),dp.end());
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
