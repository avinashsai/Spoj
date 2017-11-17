#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll no,n,i,s;
   cin>>no;
   while(no--)
   {
   	cin>>n;
   	vector<ll>a(n);
   	std::vector<ll>b(n);
   	for(i=0;i<n;i++)
   		cin>>a[i];
   	for(i=0;i<n;i++)
   		cin>>b[i];
   	sort(a.begin(),a.end());
   	sort(b.begin(),b.end());
   	s=0;
   	for(i=0;i<n;i++)
   		s=s+a[i]*b[i];
   	cout<<s<<endl;
   }
   return 0;
}