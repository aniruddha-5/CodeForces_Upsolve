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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    
    while(t--)
    {
        ll a,b;
		cin>>a>>b;
		ll gcd=abs(a-b);
		ll mn=min(a,b);
		ll step;
		if(a==b) cout<<0<<" "<<0<<endl;
		
		else
		{
			if(mn%gcd==0) step=0;
			else if(mn<gcd)
			{
				ll y=(gcd)-mn;
				step=min(y,mn);
			}
			else
			{
				ll x=mn%gcd;
				step=min(x,gcd-x);
			}
			cout<<gcd<<" "<<step<<endl;
		}
		
    }
}



