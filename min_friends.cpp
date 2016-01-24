#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<vector<ll> > v(200001);
bool visit[200001];
ll c=0;
void initialize(ll n)
{
		memset(visit,0,sizeof(visit));
		v.clear();
		for(ll i=1;i<=n;i++)	
		{
			visit[i]=false;
		}
}
void DFS(ll s)
{
	visit[s]=true;
	
	for(ll i = 0;i!=v[s].size();i++)
	{
		if(visit[ v[s][i] ] == false)
		{
			c++;
			DFS(v[s][i]);
		}
	}
}

int main()
{
	ll n,m,t;
	
	
		c = 0;
		cin >> n>> m;
		ll x ,y;
		initialize(n);
		for(ll i=0;i<m;i++)	
		{
			cin >> x >>y;
			v[x].push_back(y);
			//v[y].push_back(x);
		}
		
		
		ll min=10000,tmp;
		for(ll i=1;i<=n;i++)	
		{
			if(visit[i] == false)
			{
				//c+=A[i];
				c=1;
				DFS(i);
				if(c < min)
				{
					min = c;
				
				}
			}			
		}
		cout << min ;
		if(t>0) cout <<"\n";
	 
}
