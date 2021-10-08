#include<bits/stdc++.h>
using namespace std;
#define ll int
#define se second
#define fi first
int main()
{
	ll h,c,q;
	cin>>h>>c>>q;
	pair<ll,pair<ll,ll>>vec[c];
	ll peak=0;
	for(int i=0;i<c;i++)
	{
		ll hi,si,ei;
		cin>>hi>>si>>ei;
		vec[i] = {hi,{si,ei}};
		peak=max(peak,hi);
	}
    bool cond;
	for(int j=0;j<q;j++)
	{
		ll hi,ti;
		cin>>hi>>ti;
        cond = hi>peak;
        if(!cond)
		{
			ll c1=0;
			ll c2=0;
			ll flag=0;
			for(int i=0;i<c;i++)
			{
                cond = ti<=vec[i].se.se && ti>=vec[i].se.fi;
                if(!cond)continue;
				else
				{
					c1++;
                    cond = vec[i].fi>=hi;
					if(!cond)c2++;
                    else
					{
						flag=1;
						printf("NO\n");
						break;
					}
				}
			}
            cond = c1==c2;
			if(cond)printf("YES\n");
			else if(!flag)printf("NO\n");
		}
		else
        {
            printf("YES\n");
        }
	}
	
	return 0;
}