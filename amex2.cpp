#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<int> >& temp){
    map<int,vector<int> > mp;
    for(auto x: temp){
        mp[x[0]].push_back(x[1]);
    }
    if(mp.find(300)!=mp.end()){
        sort(mp[300].begin(),mp[300].end());
    }
        if(mp.find(500)!=mp.end()){
        sort(mp[500].begin(),mp[500].end());
    }
        if(mp.find(800)!=mp.end()){
        sort(mp[800].begin(),mp[800].end());
    }
    int val =0;
    if(mp[300].size()>=3){
        val=max(val,mp[300][0]+mp[300][1]+mp[300][2]);
    }
    if(mp[300].size()==2){
        val=max(val,mp[300][0]+mp[300][1]);
    }
     if(mp[300].size()==1){
        val=max(val,mp[300][0]);
    }
    if(mp[500].size()>=1&&mp[300].size()>=1){
        val=max(val,mp[500][0]+mp[300][0]);
    }
    if(mp[500].size()>=1){
        val=max(val,mp[500][0]);
    }
    if(mp[800].size()>=1){
        val=max(val,mp[800][0]);
    }
    return val;
}

int main(){
    int n;
    cin >> n;
    int ct;
    cin >> ct;
    vector<int> pos(n);
    for(int i=0;i<n;i++){
    cin >> pos[i];}
    vector<vector<int> > res;
    for(int i=0;i<ct;i++){
        int a,b;
        cin >> a >> b;
        res.push_back({a,b});
    }
    int p,q,r,s;
    cin >> p >> q >> r >> s;
    int limit=0;
    int alice =0,bob=0;
    for(int i=0;i<n;i++){
            int start=limit;
        limit += pos[i];
        vector<vector<int> > temp;
        for(int j=start;j<limit;j++){
            temp.push_back(res[j]);
        }
        int val = func(temp);
        // cout << "val is " << val << endl;
        if(i+1==p){
            alice+=q*val;
        }else{
            alice+=val;
        }
        if(i+1==r){
            bob+=s*val;
        }else{
            bob+=val;
        }
    }
    cout << alice << " " << bob << endl;
}