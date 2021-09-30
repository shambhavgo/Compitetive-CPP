#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a%b==0 || a%c==0 || a%d==0 )
        {
            cout<<0<<endl;
            continue;
        }
        b=b-(a%b);
        c=c-(a%c);
        d=d-(a%d);
        cout<<min(b,min(c,d))<<endl;
    }
    return 0;
}