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
	int n;
	cin>>n;
	int a[n],sum=0,cnt=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%n) cout<<-1<<endl;
	else
	{
		sum=(sum)/n;
		for(int i=0;i<n;i++) {
		if(a[i]>sum)
		{
			cnt++;
		}
		}
		cout<<cnt<<endl;
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



