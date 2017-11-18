#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
	string s1,s2,s3,s4;
	ll no=10,n,m,i,x,y;
	while(no--)
	{
		cin>>s1>>s2;
		n=s1.length();
		m=s2.length();
		bool bor=0;
		ll j=n-1;
       for(i=m-1;i>=0;i--,j--)
       {
       	  if((s1[j]-'0')-bor-(s2[i]-'0')>=0){
       	  	s1[j]=((s1[j]-'0')-bor-(s2[i]-'0'))+'0';
       	  	bor=0;
       }
       else
       {
       	x=(s1[j]-'0')+(10-bor);
       	y=(s2[i]-'0');
       	s1[j]=(x-y)+'0';
       	bor=1;
       }
	}
	if(bor)
	{
		j=n-m-1;
		while(j>=0)
		{
			if((s1[j]-'0')-bor>=0)
			{
				s1[j]=((s1[j]-'0')-bor)+'0';
				bor=0;
			}
			else
			{
				s1[j]=(10-bor+(s1[j]-'0'))+'0';
				bor=1;
			}
			j--;
		}
	}
	ll div,rem=0;
	i=0;
	while(i<n)
	{
		div=(s1[i]-'0');
		s3[i]=((rem*10+div)/2)+'0';
		rem=(rem*10+div)%2;
        i++;
	}
     for(i=0;i<n;i++)
		s4[i]=s3[i];
	bool car=0;
	j=n-1;
	for(i=m-1;i>=0;i--,j--)
	{
		x=(s3[j]-'0');
		y=(s2[i]-'0');
		if(x+y+car>9)
		{
			s3[j]=((x+y+car)%10)+'0';
			car=1;
		}
		else{
			s3[j]=(x+y+car)+'0';
			car=0;
		}
	}
	      //cout<<car;
	if(car)
	{
		j=n-m-1;
		while(j>=0)
		{
			x=(s3[j]-'0');
			if(x+car>9){
				s3[j]=(((x+car)%10)+'0');
				car=1;
			}
			else
			{
				s3[j]=((x+car)+'0');
				car=0;
			}
			j--;
		}
	}
		//cout<<endl;
		i=0;
		while(s3[i]=='0')
			i++;
		while(i<n)
		{
			cout<<s3[i],i++;
		}
		cout<<endl;
		i=0;
		while(s4[i]=='0')
			i++;
		while(i<n)
		{
			cout<<s4[i],i++;
		}
		cout<<endl;
}
	return 0;

}