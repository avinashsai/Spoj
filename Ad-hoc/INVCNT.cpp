#include<iostream>
#include<stdio.h>
#define ll long long int
using namespace std;
ll merge(ll a[],ll temp[],ll left,ll mid,ll right,ll n)
{
	ll i=left,j=mid,k=left,inv=0;
	while(i<mid&&j<=right)
	{
		if(a[i]<=a[j])
			temp[k++]=a[i++];
		else
		{
			temp[k++]=a[j++];
			inv=inv+(mid-i);
		}
	}
	while(i<mid)
		temp[k++]=a[i++];
	while(j<=right)
		temp[k++]=a[j++];
	for(i=left;i<=right;i++)
		a[i]=temp[i];
	return inv;
}
ll mergesort(ll a[],ll temp[],ll left,ll right,ll n)
{
    ll inv=0,mid;
    if(right>left)
    {
    	mid=(left+right)/2;
    	inv=mergesort(a,temp,left,mid,n);
    	inv+=mergesort(a,temp,mid+1,right,n);
    	inv+=merge(a,temp,left,mid+1,right,n);
    }
    return inv;
}
int main()
{
	ll a[200000],no,n,i;
	char c,p;	
	scanf("%lld",&no);
	scanf("%c",&c);
	while(no--)
	{
		scanf("%lld",&n);
		ll temp[n];
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		scanf("%c",&c);
		cout<<mergesort(a,temp,0,n-1,n)<<endl;
	}
	return 0;
}