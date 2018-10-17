#include<bits/stdc++.h>
using namespace std;
int main()
{
	float c;
	cin>>c;
	while(c!=0)
	{
		float sum=0,i=1;
		int j=1;
		while(sum<c)
		{
			i++;
			j++;
			sum+=(1/i);
		}
		cout<<j-1<<" "<<"card(s)"<<endl;
		cin>>c;
	}
	return 0;
}