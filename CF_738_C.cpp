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
	ll n,pos=-1;
	cin>>n;
	ll a[n];
	ll s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
		if(a[n-1]==0)
		{
			for(int i=1;i<=n+1;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else if(a[0]==1)
		{
			cout<<n+1<<" ";
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i=n-1;i>=0;i--)
			{
				if(a[i]==0)
				{
					pos=i;
					break;
				}
			}
			for(int i=0;i<n;i++)
			{
				if(i==pos)
				{
					cout<<i+1<<" "<<n+1<<" ";
				}
				else
				cout<<i+1<<" ";
			}
			cout<<endl;
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



