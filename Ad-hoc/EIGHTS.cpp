#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
	ll no,n;
	cin>>no;
	while(no--)
	{
		cin>>n;
		ll d = n/4;
		if(n%4==1)
			cout<<d*1000 + 192;
		else if(n%4==2)
			cout<<d*1000 + 442;
		else if(n%4==3)
			cout<<d*1000 + 692;
		else if(n%4==0)
			cout<<(d-1)*1000 + 942;
		cout<<endl;
	}
	return 0;
}