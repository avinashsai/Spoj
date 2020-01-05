#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z)
{
	int a = x;
	if(y<a)
	a = y;
	if(z<a)
	a = z;
	return a;
}
int find(string s1,string s2,int n1,int n2)
{
	int f[n1+1][n2+1];
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			if(i==0)
			f[i][j] = j;
			else if(j==0)
			f[i][j] = i;
			else if(s1[i-1]==s2[j-1])
			f[i][j] = f[i-1][j-1];
			else
			f[i][j] = 1+min(f[i-1][j],f[i][j-1],f[i-1][j-1]);
		}
	}
	return f[n1][n2];
}
int main()
{
	int t;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		int n1 = s1.length();
		int n2 = s2.length();
		cout<<find(s1,s2,n1,n2)<<endl;
	}
	return 0;
}
