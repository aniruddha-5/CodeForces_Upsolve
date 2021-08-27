/* Aniruddha Routh JGEC'23 */

#include<bits/stdc++.h>
using namespace std;

#define ll int
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


void make_set(ll i, ll* parent,ll * sz)
{
	parent[i]=i;
	sz[i]=1;
}

ll find_set(ll v, ll *parent)
{
	if(v==parent[v])
	{
		return v;
	}
	return parent[v]=find_set(parent[v], parent);
}

void union_set(ll a,ll b, ll* sz,ll*parent)
{
	a=find_set(a,parent);
	b=find_set(b,parent);
	if(a!=b)
	{
		if(sz[a]<sz[b])
		{
			swap(a,b);
		}
		parent[b]=a;
		sz[a]+=sz[b];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N,x,y;
    cin>>N>>x>>y;
    ll parent1[N+1],sz1[N+1],parent2[N+1],sz2[N+1];
    for(int i=1;i<=N;i++)
    {
    	make_set(i,parent1,sz1);
    	make_set(i,parent2,sz2);
	}
	
	for(int i=1;i<=x;i++)
    {
    	ll u,v;
    	cin>>u>>v;
    	union_set(u,v,sz1,parent1);
	}
	
	for(int i=1;i<=y;i++)
    {
    	ll u,v;
    	cin>>u>>v;
    	union_set(u,v,sz2,parent2);
	}
	
	vector<pair<ll,ll>> ans;
	for(int i=1;i<=N;i++)
    {
    	for(int j=i+1;j<=N;j++)
    	{
    		if(find_set(i,parent1)!=find_set(j,parent1) && find_set(i,parent2)!=find_set(j,parent2))
    		{
    			ans.push_back({i,j});
    			union_set(i,j,sz1,parent1);
    			union_set(i,j,sz2,parent2);
			}
		}
	}
	cout<<ans.size()<<endl;
	for(auto it: ans)
	{
		cout<<it.F<<" "<<it.S<<endl;
	}
	return 0;
	
}



