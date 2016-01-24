#include<bits/stdc++.h>

using namespace std;
typedef long long ll; 
vector<vector<ll> > v(20000);
queue<ll> q;
bool visit[20000];
ll BFS(ll s)
{
	q.push(s);
	visit[s]=true;
	ll c = 1;
	while(!q.empty())
	{
		ll x = q.front();
		q.pop();
	
		for(ll j=0;j!=v[x].size();j++)
		{
			if(visit[ v[x][j]] == false)
			{
				q.push(v[x][j]);
				visit[ v[x][j] ] = true;
				c++;
			}
		}
	}
	return c;
}
int main()
{
	ll t , e ;

	cin >> t;
	
	while(t--)
	{
		cin >> e;
		v.clear();
		q = queue<ll>();
		memset(visit,false,sizeof(visit));	
		ll x,y;
		while(e--)
		{
			cin >> x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		cout << BFS(1) <<"\n";
	}
}


