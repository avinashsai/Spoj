#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#define MAX 100000
using namespace std;
ll find(vector<ll>a,ll val,ll k,ll n)
{
	ll i,count=1,temp=0;
	for(i=1;i<n;i++)
	{
		if(a[i]-a[temp]>=val)
		{
			count++;
			if(count==k)
				return 1;
			temp = i;
		}
	}
	return 0;
}
ll search(vector<ll>a,ll k,ll n)
{
   ll l=0,h=a[n-1],mid,max=-1;
   while(l<=h)
   {
   	mid=(l+h)/2;
   	if(find(a,mid,k,n)==1)
   	{
   		if(max<mid)
   			max=mid;
   	  l = mid+1;
   	}
   	else
   		h = mid-1;
   }
   return max;
}
int main()
{
ll no,n,i,k;
cin>>no;
while(no--)
{
	cin>>n>>k;
	std::vector<ll> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	cout<<search(a,k,n)<<endl;
}
return 0;
}