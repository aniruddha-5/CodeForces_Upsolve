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
	ll a[n],o=0,z=0,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]==1) o++;
		if(a[i]==0) z++;
	}
	if((z+o) == n) cout<<(z*o)<<endl;
	else
	{
		if(sum<n)
		{
			cout<<(sum)*(n-sum)<<endl;
		}
		else
		{
			ll r=sum%n;
			cout<<(r)*(n-r)<<endl;
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



