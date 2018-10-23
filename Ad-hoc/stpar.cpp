#include<iostream>
#include<stack>
using namespace std;
bool possible(int a[],int n)
{
   stack<int> p;
   int count=1,i;
   bool poss=1;
   for(i=0;i<n;i++)
   {
   	while(!p.empty() && p.top()==count)
   	{
   		count+=1;
   		p.pop();
   	}
   	if(a[i]==count)
   		count+=1;
   	else if(!p.empty() && p.top()<a[i])
   	{
   		poss=0;
   		break;
   	}
   	else
   		p.push(a[i]);
   }
   return poss;
}
int main()
{
	int a[100000],i=0,n,m;
	cin>>n;
	while(n)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		if(possible(a,n))
		cout<<"yes";
	else
		cout<<"no";
	cout<<endl;
	cin>>n;

	}
	return 0;
}