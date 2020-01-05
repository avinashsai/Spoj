#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll max(ll x,ll y)
{
	if(x>=y)
	return x;
	return y;
}
ll find(int a[][105],int m,int n)
{
	ll b[105][105];
	int i,j;
	for(i=1;i<=n;i++)
	b[1][i] = a[1][i];
	for(i=2;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1)
			b[i][j] = a[i][j] + max(b[i-1][j],b[i-1][j+1]);
			else if(j==n)
			b[i][j] = a[i][j] + max(b[i-1][j],b[i-1][j-1]);
			else
			b[i][j] = a[i][j] + max(b[i-1][j],max(b[i-1][j+1],b[i-1][j-1]));
		}
	}
	/*
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
	*/
	ll ma = -1;
	for(i=1;i<=n;i++)
	if(ma<b[m][i])
	ma = b[m][i];
	return ma;
}
int main()
{
	int t,n,m,i,j;
	int a[105][105];
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		cin>>a[i][j];
		cout<<find(a,m,n)<<endl;
	}
	return 0;
}
