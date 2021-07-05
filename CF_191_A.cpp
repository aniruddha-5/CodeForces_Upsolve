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
	/*
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }*/
    
    int n;
    cin>>n;
    int x,o=0,mx=-1,sum=0;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	if(x==1)
    	{
    		o++;
    		sum+=-1;
		}
		else sum+=1;
		mx=max(mx,sum);
		if(sum<0) sum=0;
	}
	cout<<(mx+o)<<endl;
}



