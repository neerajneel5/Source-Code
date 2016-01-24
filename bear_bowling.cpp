#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,i,j,sum=0;
	
	
	cin >> n;
	//vector<ll> v(n+1);
	ll arr[n];
	ll x;
	for(i=0;i<n;i++)
	{
		
		cin >> arr[i];
	}
	ll p = pow(2,n);
	sum=0;
	ll k=1;
	for(i=0;i<p;++i)
	{
		k=1;
		for(j=0;j<n;j++)
		{
			if(i & (1<<j))
			{	//cout << arr[j];
				sum+=(k)*arr[j];
				k++;
			}
		}
		//cout <<" >> " <<sum;
		//cout<<"\n";
	}
	cout << sum <<"\n";
}
