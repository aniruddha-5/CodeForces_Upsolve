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
	ll n,mn=MOD,mx=0,px=0,pn=0;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>mx)
		{
			mx=a[i];
			px=i;
		}
		if(a[i]<mn)
		{
			mn=a[i];
			pn=i;
		}
	}
	ll ans=0;
	if(px<=pn)
	{
		ans=min(px+1,n-pn)+min(pn-px,max(px+1,n-pn));
	}
	else
	{
		ans=min(pn+1,n-px)+min(px-pn,max(pn+1,n-px));
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


