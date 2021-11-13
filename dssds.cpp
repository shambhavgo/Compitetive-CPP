#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main(){

   vector<int>a{1,1,2,3,3,4,6};
   vector<int>b(20);
   int n=7;
   int j=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]!=a[i+1])
       {
           b[j++]=a[i];
           b[j++]=a[n-1];
       }
   }
   for(int i=0;i<=j;i++)a[i]=b[i];
   for(auto i:a)cout<<i<<" ";
}