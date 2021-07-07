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
        //solve();
        int n,m,i,j,x,y;
        cin>>n>>m>>i>>j;
        if(j<=(m/2))
        {
        	y=m;
		}
		else
		{
			y=1;
		}
		if(i<=(n/2))
        {
        	x=n;
		}
		else
		{
			x=1;
		}
		cout<<x<<" "<<y<<" "<<(n-x+1)<<" "<<(m-y+1)<<endl;
    }
}



