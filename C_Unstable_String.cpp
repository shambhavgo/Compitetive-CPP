#include<bits/stdc++.h>
using namespace std;

int fun(string s)
{   
    int count=0;
            if(s.length()==1)return 1;
            else if(s.length()==2)
            {
                if((s[0]=='0' && s[1]=='0') || (s[0]=='1' && s[1]=='1'))return 0;
                return 1;
            }
            else
            {
                int temp=0;
                for(int j=0;j<s.size()-1;j++)
                {
                    if((s[j]=='0' && s[j+1]=='0') || (s[j]=='1' && s[j+1]=='1'))
                    {temp=1;break;}
                }
                if(temp)return 0;
                temp=0;
                    for(int j=1;j<s.size()-1;j++)
                    {
                        if(s[j]=='?')
                        {
                            int index=j-1;
                            while(s[j]=='?' && j<s.size()-1)j++;
                            int bw= j-index-1;
                            if(bw%2==0)
                            {
                                if((s[index]=='1' && s[j]=='1') || (s[index]=='0' && s[j]=='0'))
                                {
                                    temp=1;
                                    break;
                                }
                            }
                            else
                            {
                                if((s[index]=='0' && s[j]=='1') || (s[index]=='1' && s[j]=='0'))
                                {
                                    temp=1;
                                    break;
                                }
                            }
                            // if((s[j-1]=='0' && s[j+1]=='1') || (s[j-1]=='1' && s[j+1]=='0'))
                            // {
                            //     temp=1;
                            //     break;
                            // }
                        }
                    }
                    if(temp)return 0;
                    else return 1;

            }
            
        return 1;
}
void subString(string s, int n,vector<string>&v)
{
    
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int ans=0;
        for (int i = 0; i < s.length(); i++){
        for (int len = 1; len <= s.length() - i; len++)
            ans+=fun(s.substr(i, len)); }

        cout<<ans<<endl;
        
    }
    return 0;
}