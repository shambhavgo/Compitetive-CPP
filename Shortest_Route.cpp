#include <iostream>
#include <bits/stdc++.h>
    using namespace std;
    #define inp(k)           ll k;cin>>k;
    #define in2(n,k)       ll n, k; cin>>n;cin>>k;
    #define in3(n,k,r)       ll n, k,r; cin>>n;cin>>k;cin>>r;
    #define ll long long int
    #define dl double
    #define ch char
    #define f(i,a,b) for(ll i=a;i<b;i++)
    #define rf(i,a,b) for(ll i=a-1;i>=b;i--)
    #define Godspeed                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define vpl vector< pair<ll,ll> >
    #define vpi vector< pair<int,int> >
    #define vi vector<int>
    #define vl vector<ll>
    #define vdl vector<dl>
    #define vch vector<char>
    #define pb push_back
    #define mp make_pair
    #define fr first
    #define se second
    #define PI 3.14159265

int32_t main() {
	Godspeed
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int a[n],l[n],r[n],tpl=-1,tpr=-1,pl[n],pr[n],templ=INT_MAX,tempr = INT_MIN;
	    f(i,0,n)scanf("%d",&a[i]);
	    rf(i,n,0)
        {
	        if(a[i]==0)r[i]=tempr,pr[i]=tpr;
			else
            {
				if(a[i]<tempr)r[i]=tempr,pr[i]=tpr;
	            else
	            {
	                tempr=a[i];
	                r[i]=tempr;
	                tpr=i;
	                pr[i]=tpr;
	            }
	        }
	    }
		f(i,0,n)
	    {
			if(a[i]==0) l[i]=templ,pl[i]=tpl;
	        else
            {
				if(a[i]>templ)l[i]=templ,pl[i]=tpl;
	            else
	            {
	                templ=a[i];
	                l[i]=templ;
	                tpl =i;
	                pl[i]=tpl;
	            }
	        }
	    }

	    f(i,0,m)
	    {
	        int q;
	        scanf("%d",&q);
	        q=q-1;
            if(q==0)
            {
                printf("%d ",0);
                continue;
            }
            if(a[q]!=0)printf("%d ",0);
            else
            {
                int lft = l[q];
                int rgt = r[q];
                if(lft==1&&rgt==2)printf("%d ",min(q-pl[q],pr[q]-q));
                else if(lft==1 && rgt!=2)printf("%d ",(q-pl[q]));
                else if(rgt==2 && lft!=1)printf("%d ",(pr[q]-q));
                else printf("%d ",-1);
            }
        }
            printf("\n");
	}
	return 0;
}