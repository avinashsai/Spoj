#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,i,n,c,l,num;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cin>>num>>n;
		vector<ll> a(n);
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a.begin(),a.end());
		c = 0;
		bool f=0;
		cout<<"Scenario"<<" "<<"#"<<j<<":"<<endl;
		for(i=n-1;i>=0;i--)
		{
			c+=a[i];
			if(c>=num)
			{
				f=1;
				cout<<n-i<<endl;
				break;
			}	
		}
		if(!f)
		{
		  if(c>=num)
		  cout<<n<<endl;
		  else
		  cout<<"impossible"<<endl;
		}
		
	}
	return 0;
}
