/* 
Aniruddha Routh JGEC'23 
Date : 2nd July 2021
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
    
#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define endl "\n"
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define F first
#define S second
#define vi vector<int>
#define pii pair<int,int>


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,k,x,cnt=0;
    cin>>n>>k>>x;
    ll a[n];
    vector<ll> v;
    for(int i=0;i<n;i++) 
    {
    	cin>>a[i];
	}
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
    	if(a[i]-a[i-1]>x)
    	{
    		cnt++;
    		v.pb(a[i]-a[i-1]);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size() && k>0 ;i++)
	{
		ll tm=((v[i]+x-1)/x)-1;
		if(k>=tm)
		{
			k-=tm;
			cnt--;
		}
		else
		{
			break;
		}	
	}
	cout<<cnt+1<<endl;
}


