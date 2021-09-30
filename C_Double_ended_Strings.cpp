#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.length(),m=b.length();
        int arr[n+1][m+1];
        int result=0;
        for(int i=0;i<=n;i++) 
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                arr[i][j]=0;
                else if(a[i-1]==b[j-1])
                {
                    arr[i][j]=arr[i-1][j-1]+1;
                    result = max(result,arr[i][j]);
                }
                else 
                arr[i][j]=0;
            }
        }
        cout<<m+n-2*result<<endl;
    }
    return 0;
}