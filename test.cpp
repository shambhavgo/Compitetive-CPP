/* Dynamic Programming C++ implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( string s, string t, int m, int n )
{
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)dp[i][j]=0;
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][m];
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b)? a : b;
}

// Driver Code
int main()
{
	string s = "AGGTAB";
	string t = "GXTXAYB";
	
	int sz1 = s.length();
	int sz2 = t.length();
	
	cout << "Length of LCS is "
		<< lcs( s, t, sz1, sz2 );
	
	return 0;
}

// This code is contributed by rathbhupendra
