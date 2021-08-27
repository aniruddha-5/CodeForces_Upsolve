/* Aniruddha Routh JGEC'23 */

#include<bits/stdc++.h>
using namespace std;

#define ll double

#define frr(i,a,n) for(ll i=a;i<n;i++)
#define fr(i,a,b) for(ll i=a;i>=b;i--)

#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define endl "\n"
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define F first
#define S second
#define vi vector<ll>
#define pii pair<ll,ll>

void solve()
{
	ll h,w,H,W;
	cin>>W>>H;
	ll x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cin>>w>>h;
	ll l,r,t,d;
	l=x1;
	r=W-x2;
	t=H-y2;
	d=y1;
	ll nW,nH;
	nW=l+r;
	nH=t+d;
	ll a=0,b=0;
	ll f=0;
	if(w<=nW)
	{
		a=w-max(l,r);
		f=1;
	}
	if(h<=nH)
	{
		b=h-max(t,d);
		f=1;
	}
	
	if(f==0)
	{
		cout<<-1<<endl;
	}
	else
	{
		if(a*b != 0)
		{
			std::cout << std::setprecision(6) << min(a,b) << '\n';
		}
		else
		{
			if(a==0) std::cout << std::setprecision(6) << b << '\n';
			else std::cout << std::setprecision(6) << a << '\n';
		}
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}



