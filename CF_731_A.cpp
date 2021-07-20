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
	int x1,x2,y1,y2,f1,f2;
	cin>>x1>>x2>>y1>>y2>>f1>>f2;
	int d=abs(x1-y1)+abs(x2-y2);
	if((x1==y1 && y1==f1) || (x2==y2 && y2==f2))
	{
		if(f1<min(x1,y1) || f1>max(x1,y1))
		{
		}
		else if(f2<min(x2,y2) || f2>max(x2,y2))
		{
		}
		else
		{
			d+=2;
		}
	}
	
	cout<<d<<endl;

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



