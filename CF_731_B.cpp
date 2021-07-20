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
	string s;
	cin>>s;
	int l=s.length();
	int f=0,f1=0;
	int pos;
	int lf=0,r=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a')
		{
			lf=i;
			r=i;
			break;
		}
	}
	for(int i=0;i<l;i++)
	{
		char x='a'+i;
		for(int j=0;j<l;j++)
		{
			if((s[j]-'a')>=l) f=1;
			else if(s[j]==x)
			{
				f1=1;
				pos=j;
				if(pos<lf)
				{
					if((lf-pos)>1)
					{
						f=1;
					}
					else
					{
						lf=pos;
					}
				}
				else if(pos>r)
				{
					if((pos-r)>1)
					{
						f=1;
					}
					else
					{
						r=pos;
					}
				}
			}
		}
		if(f1==1) f1=0;
		else f=1;
	}
	if(f==0) yes
	else no

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



