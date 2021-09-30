#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll test;
    cin >> test;

    while (test--) {
        ll D,d,p,q;
        cin>>D>>d>>p>>q;
        ll m=D/d,ans=0;
        if(m==1)
        {
            ans = d*(p) + D%d*(p + q);
        }
        ans = d*(m*p + m*(m-1)/2*q) + D%d*(p + m*q);
        cout<<ans<<endl;
    }

    return 0;
}
