#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,i;
	cin>>s;
	while(s!="0")
	{
		n=s.length();
		long int a[n];
		for(i=0;i<n;i++)
			a[i]=0;
		a[0]=1;
		for(i=1;i<n;i++)
		{
			if(s[i]-'0')
			a[i]=a[i-1];
			int num=(s[i-1]-'0')*10+(s[i]-'0');
            if(num>9 && num<=26)
            {
               if(i==1)
               	a[i]=a[i]+1;
               else
               	a[i]=a[i]+a[i-2];
            }
		}
		cout<<a[n-1]<<endl;
		cin>>s;
	}
	return 0;
}