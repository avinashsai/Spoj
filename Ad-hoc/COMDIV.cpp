#include<iostream>
#include<stdio.h>
#include<vector>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	ll no,a,b,c=0,i;
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld %lld",&a,&b);
		if(a==1||b==1)
			printf("1\n");
		else
		{
		ll l=gcd(a,b);
		if(l==1)
			printf("1\n");
		else
		{
			c=2;
		for(i=2;i*i<l;i++)
			if(l%i==0)
				c=c+2;
			if(l%i==0&&l/i==i)
				c++;
			printf("%lld\n",c);
		}
		}
	}
	return 0;
}