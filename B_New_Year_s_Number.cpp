#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        int p,m;
        p=n/2020;
        m=n%2020;
        //cout<<p<<" "<<m<<endl;
        if(p>=m)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}