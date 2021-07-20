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
	int n,m;
	cin>>n>>m;
	char a[n+n-1][m];
	char ans[m];
	for(int i=0;i<n+n-1;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			ans[j]=0;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n+n-1;j++)
		{
			ans[i]^=a[j][i];
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<ans[i];
	}
	cout<<endl;

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



