#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int> 
int solve(int n,vector<int> &from,vector<int> &to,vector<int> &temp,int src,int dest,int day)
{
	src--;dest--;
	vector<vector<pii > > adj(n);
	for(int i = 0;i<from.size();i++){
		int u = from[i]-1,v = to[i]-1,w = temp[i];
		adj[u].push_back({v,w});
	}
	priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
	vector<int> cap(n,-1e9);
	cap[src] = 0;
	pq.push({cap[src],src,day});
	while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();
		int u = cur[1];
		int ans =cur[0];
        int time=cur[2];
		if(ans != cap[u])
			continue;
        if(time<0)
            continue;
		for(auto it: adj[u]){
			int v = it.first;
			int w = it.second;
			w = max(w,ans);
			if(w>cap[v]){
				cap[v] = w;
				pq.push({cap[v],v,time-1});
			}
		}
	}
	return (cap[dest] == 1e9)?-1:cap[dest];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,src,dest,day;
        cin>>n>>m;
        vector<int> from(m),to(m),temp(m);
        for(int i=0;i<m;i++)
            cin>>from[i];
        for(int i=0;i<m;i++)
            cin>>to[i];
        for(int i=0;i<m;i++)
            cin>>temp[i];
        cin>>src>>dest>>day;
        int res=solve(n,from,to,temp,src,dest,day);
        cout<<res<<"\n";
    }
    return 0;
}