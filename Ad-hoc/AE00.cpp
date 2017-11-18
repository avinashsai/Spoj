#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll n,i,j,c=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
     for(j=i;j<=n;j++)
     {
     	if(i*j>n)
     		break;
     	else if(i*j<=n)     		
     		c++;
     }
   }
   cout<<c;
   return 0;
}