#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,m,x;cin>>n>>m>>x;
        if(x==1){cout<<1<<endl;continue;}
        int r,c;
        r=x%n;
        if(r==0)r+=n;
        if(x%n)c=x/n+1;
        else c=x/n;
        cout<<(r-1)*m+c<<endl;
    }
    return 0;
}