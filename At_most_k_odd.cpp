#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

vector<int> v(n),pre(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
    if(i==0)
    pre[i]=v[i]%2;
    else
    pre[i]=v[i]%2 + pre[i-1];
}

set<vector<int> > s;

int k;
cin>>k;

for(int i=0;i<n;i++)
{
    vector<int> g;
    int p;
    if(i==0)
    p=0;
    else
    p=pre[i-1];
    for(int j=i;j<n;j++)
    {
        if(pre[j]-p<=k)
        {
            g.push_back(v[j]);
            s.insert(g);
        }
        else
        break;
    }
}

cout<<s.size()<<endl;
}