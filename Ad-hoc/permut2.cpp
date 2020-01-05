#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t=1,n,i,l;
	cin>>n;
	while(n!=0)
	{
		vector<ll> a;
		vector<ll>::iterator it;
		for(i=0;i<n;i++)
		{
			cin>>l;
			a.push_back(l);
		}
		bool found = 0;
		for(i=1;i<=n;i++)
		{
			it = std::find(a.begin(),a.end(),i);
				if(it - a.begin() +1 != a[i-1])
				{
					found = 1;
					break;
				}
		}
		if(!found)
		cout<<"ambiguous"<<endl;
		else
		cout<<"not ambiguous"<<endl;;
		cin>>n;
	}
	return 0;
}
