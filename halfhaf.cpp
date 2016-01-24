#include <iostream>
using namespace std;

int main()
{
   // cout << "Hello World!" << endl;
   
   
   int t, n,mod;
   
   cin >> t;
   
   while(t--)
   {
   		int a,b;
   		cin >> a >> b >> n >> mod;
   		int arr[n];
   		arr[0]=a;arr[1]=b;
   		
   		for(int i=2;i<n;i++)
   		{
   			arr[i]=(arr[i-1]+arr[i-2])%mod;
   			
   		}
   		long long sum=0;
   		
   		long long c[n];
   		for(int i=0;i<mod ;i++)
   			c[i]=0;
   		for(int i=0;i< n ;i++)
   		{
   			c[ arr[i] ]++;
   		}
   		for(int i=0;i<mod ;i++)
   			sum+=(c[i]*c[i]);
   		
   		cout << sum<<"\n";
   }
    return 0;
}

