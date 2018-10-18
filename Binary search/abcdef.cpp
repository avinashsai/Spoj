#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#define ll long long int
using namespace std;
vector<ll>s1,s2;
int main()
{
	ll a[100],n,i,j,k,res=0,lo,hi;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		for(k=0;k<n;k++){
      if(a[k]==0)
      continue;
   			s1.push_back((a[k]*(a[i]+a[j])));
   		}
   	}
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
      for(k=0;k<n;k++){
        s2.push_back((a[k]*a[j]+a[i]));
      }
    }
   }
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  
  for (int i=0;i<s1.size();i++)
    {
        lo=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        hi=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        res+=(hi-lo);
    }
    printf("%lld\n",res);

}