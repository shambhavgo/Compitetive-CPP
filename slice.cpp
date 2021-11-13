#include <bits/stdc++.h>
#define ll long long
using namespace std;



int n=26;
int compare(const void * a, const void * b)
{
    return (*(int*)b - *(int*)a );
}

void mn(int qw[],int u,vector<vector<int>>&g){
    int sz = g[u].size();
    int* t1 = new int[sz];
    qw[u] = sz;
    int k=0;
    int i=0;
    // int x=0;
    while(i<g[u].size()){
        mn(qw,g[u][i],g);
        t1[k++]=qw[g[u][i]];
        i++;
    }
    qsort(t1, qw[u], sizeof (int), compare);
    i=0;
    while(i<g[u].size())
    {
        qw[u]=max(qw[u],t1[i]+ i++ +1);
        // x = t1[i]+i+1;
        // qw[u]=max(qw[u],x);
        // i++;
    }

}

int main(){

    int q;
    cin >> q;
    string t;
    int c = 'A';
    vector<vector<int>> arr(26);
    for(int i=0;i<q;i++){
        cin >> t;
        int y = t[2]-c;
        int x = t[0]-c;
        arr[x].push_back(y);
    }

    int qw[n];
    memset(qw,0,sizeof(qw));
    int res=-1;
    mn(qw,0,arr);
    res=qw[0];
    cout << res << endl;

    
    // res=qw[0];
    // if(res!=INT_MIN)
    // cout << res << endl;
    // else
    // cout << -1 << endl;
}