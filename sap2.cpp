#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long
int32_t main()
{
    int n,x=0,y=-1;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    if (n<2) cout<< 0;
    else if (ar[n-1]>=0 && ar[n-2]>=0) cout<< ar[n-1]+ar[n-2];
    else if (ar[n-2]<0 && ar[n-1]>=0) cout<< ar[n-1]+ar[0];
    else if (ar[n-2]<0 && ar[n-1]<0) cout<< ar[n-1]+ar[n-2];
}