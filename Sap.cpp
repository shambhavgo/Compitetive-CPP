#include<bits/stdc++.h>
using namespace std;
  
int countFreq(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int res = 0;
   
    for (int i = 0; i <=m - n; i++)
    {
        if(s1.substr(i,n)==s2)res++;
    }
    return res;
}
int main()
{
   string s1,s2;
   cin>>s1>>s2;
   transform(s1.begin(),s1.end(),s1.begin(),::tolower);
   transform(s2.begin(),s2.end(),s2.begin(),::tolower);
   cout << countFreq(s1, s2);
   return 0;
}