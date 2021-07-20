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
	int k,n,m;
	cin>>k>>n>>m;
	int a1[n];
	int a2[m];
	int a[m+n];
	int f=0;
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	int i1=0,i2=0;
	for(int i=0;i<n+m;i++)
	{
		if(a1[i1]==0 && i1<n)
		{
			k++;
			a[i]=a1[i1];
			i1++;
			
		}
		else if(a2[i2]==0 && i2<m)
		{
			k++;
			a[i]=a2[i2];
			i2++;
			
		}
		else if(a1[i1]<=k && i1<n)
		{
			
			a[i]=a1[i1];
			i1++;
			
		}
		else if(a2[i2]<=k && i2<m)
		{
			
			a[i]=a2[i2];
			i2++;
		}
		else
		{
			f=1;
		}
	}
	
	if(f==1) cout<<-1<<endl;
	else
	{
		for(int i=0;i<n+m;i++)
		{
			cout<<a[i]<<" ";
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



