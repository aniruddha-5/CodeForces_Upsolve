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
	int a[n],b[n],s1=0,s2=0,sum=0;
	string add,sub;
	frr(i,0,n)
	{
		cin>>a[i];
		s1+=a[i];
	}
	frr(i,0,n)
	{
		cin>>b[i];
		s2+=b[i];
	}
	if(s1==s2)
	{
		frr(i,0,n)
		{
			sum+=abs(a[i]-b[i]);
			if(a[i]<b[i]) add.append((b[i]-a[i]),i+1);
			else if(a[i]>b[i]) sub.append((a[i]-b[i]),i+1);
		}
		cout<<sum/2<<endl;
		for(int i=0;i<add.length();i++)
		{
			cout<<(int)sub[i]<<" "<<(int)add[i]<<endl;
		}
	}
	else
	{
		cout<<-1<<endl;
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



