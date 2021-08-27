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
	ll n,cnt1=0,cnt2=0;
	cin>>n;
	string s,s1,s2;
	cin>>s;
	s1=s2=s;
	if(s[0]=='?') s1[0]='R';
	if(s[0]=='?') s2[0]='B';
	
	for(int i=1;i<n;i++)
	{
		if(s1[i]=='?')
		{
			if(s1[i-1]=='R')
			{
				s1[i]='B';
			}
			else
			{
				s1[i]='R';
			}
		}
		if(s2[i]=='?')
		{
			if(s2[i-1]=='B')
			{
				s2[i]='R';
			}
			else
			{
				s2[i]='B';
			}
		}	
	}
	for(int i=1;i<n;i++)
	{
		if(s1[i]==s1[i-1]) cnt1++;	
		if(s2[i]==s2[i-1]) cnt2++;
	}
	if(cnt1<=cnt2)
	{
		cout<<s1<<endl;
	}
	else
	{
		cout<<s2<<endl;
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



