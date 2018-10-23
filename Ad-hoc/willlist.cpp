#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	if((n&(n-1))==0 || n==0)
		cout<<"TAK";
	else
		cout<<"NIE";
	return 0;
}