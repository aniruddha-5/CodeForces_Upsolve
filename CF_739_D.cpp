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
	ll n,ans=20;
	cin>>n;
	string Sn=to_string(n);
	for(ll x=1;x<=pow(10,18);x*=2)
	{
		string Sx=to_string(x);
		ll i=0,j=0,target=0;
		while(i<Sn.length() && j<Sx.length())
		{
			if(Sn[i]==Sx[j])
			{
				target++;
				i++;
				j++;
			}
			else
			{
				i++;
			}
		}
		ans=min(ans,Sn.length()+Sx.length()-(2*target));
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



