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
	map<char,int>mp;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		mp[s[i]]++;
	}
	int t=0,ans=0;
	for(auto it:mp)
	{
		if(it.second==1)
		{
			if(t==0)
			{
				t=1;
			}
			else
			{
				ans++;
				t=0;
			}
		}
		else
		{
			ans++;
		}
		
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



