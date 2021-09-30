#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int c=0;
        vector<int>e,o;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)e.push_back(a[i]);
            else o.push_back(a[i]);
        }
        int t=0;
        for(int i=0;i<e.size();i++)
        {
            a[t]=e[i];
            t++;
        }
        for(int i=0;i<o.size();i++)
        {
            a[t]=o[i];
            t++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(gcd(a[i],2*a[j])>1)c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}