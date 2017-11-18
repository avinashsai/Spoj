#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll no,n,c,i,l;
   cin>>no;
   while(no--)
   {
   	cin>>n;
   	c=0;
   	for(i=0;i<n;i++){
   		cin>>l;c=c+l;
   		c=c%n;
   	}
   	c=c%n;
   	if(c==0)
   		cout<<"YES"<<endl;
   	else
   		cout<<"NO"<<endl;
   }
   return 0;
}