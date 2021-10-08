//You are given two positive integers n and s. Find the maximum possible median of an array 
//of n non-negative integers (not necessarily distinct), such that the sum of its elements is equal to s.
//A median of an array of integers of length m is the number standing on the ⌈m2⌉-th (rounding up) 
//position in the non-decreasing ordering of its elements. Positions are numbered starting from 1. //
//For example, a median of the array [20,40,20,50,50,30] is the ⌈m2⌉-th element of [20,20,30,40,50,50], 
//so it is 30. There exist other definitions of the median, but in this problem we use the described definition.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int c=n/2+1;
        int ans=s/c;;
        cout<<ans<<endl;
    }
}