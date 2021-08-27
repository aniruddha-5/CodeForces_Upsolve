/* Aniruddha Routh JGEC'23 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
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
	ll n;
	cin>>n;
	ll ans=0;
	ll r1=0;
	ll c=0,r=0;
	c=n/6;
	r=n%6;
	if(n<=6)
	{
		ans=15;
	}
	else if(r==1)
	{
		ans=(c-1)*15+20;
	}
	else if(r==2)
	{
		ans=(c-1)*15+20;
	}
	else if(r==3)
	{
		ans=(c-1)*15+25;
	}
	else if(r==4)
	{
		ans=(c-1)*15+25;
	}
	else if(r==5)
	{
		ans=(c+1)*15;
	}
	else
	{
		ans=c*15;
	}
	cout<<ans<<endl;
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



