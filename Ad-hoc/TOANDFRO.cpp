#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	while(n!=0)
	{
		string s;
		cin>>s;
		int len=s.length();
		string p="";
		int row=len/n;
		for(i=0;i<row;i++)
			{
				string k=s.substr(i*n,n);
				if(i%2==1)
				reverse(k.begin(),k.end());
			  p=p.append(k);
			}
		for(i=0;i<n;i++)
		{
			for(int j=i;j<len;j=j+n)
			cout<<p[j];
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}