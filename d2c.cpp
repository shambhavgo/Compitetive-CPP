#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int LCM(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int n;
    cin>>n;
    int a=0,b=0;
    int x,y;
    bool i=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            if(i==0)a=gcd(a,x),b=gcd(b,y);
            else a=gcd(a,y),b=gcd(b,x);
        }
        else 
        {
            if(i)a=gcd(a,x),b=gcd(b,y);
            else a=gcd(a,y),b=gcd(b,x);
        }
    }   
    cout<<LCM(a,b);
}