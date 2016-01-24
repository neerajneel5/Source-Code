#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	int t;
	//vector<int> v[10];
	cin >> t;
	
	while(t--)
	{
		cin >> n >> k;
		vector<vector<int> > v(n+1);
		int x,y;
		for(int i=0;i<k;i++)
		{
			cin >> x >> y;
			v[x].push_back(y);
		}
		
		for(int i=1;i<=n;i++)
		{
			cout  << i << " >>";
			for(int j=0;j!= v[i].size();++j)
			{
				cout  << v[i][j] << " >>";	
			}
			cout << "\n";
		
		}
	}
	
}
