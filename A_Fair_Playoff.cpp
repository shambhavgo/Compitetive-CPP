#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a[4];
        for(int i=0;i<4;i++)cin>>a[i];
        int aa,bb;
        aa=max(a[0],a[1]);
        bb=max(a[2],a[3]);

        sort(a,a+4);
        if((aa==a[3] && bb==a[2])||(aa==a[2]&&bb==a[3]))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}