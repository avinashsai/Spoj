#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n;
	string s1,s2,s3,s4,s5;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2>>s3>>s4>>s5;
		//cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5;
		int num1 = 0,num2 =0,res=0;
		int ind = -1;
		for(i=0;i<s1.length();i++)
		{
			if(s1[i]=='m'){
				ind = 0;
			break;
		}
			num1 = num1*10 + s1[i] - '0';
		}
		for(i=0;i<s3.length();i++)
		{
			if(s3[i]=='m')
			{
				ind = 1;
				break;
			}
			num2 = num2 * 10 + s3[i] - '0';
		}
		if(ind!=-1)
		{
		for(i=0;i<s5.length();i++)
		res = res * 10 + s5[i] - '0';
	}
		if(ind==0)
		num1 = res - num2;
		else if(ind==1)
		num2 = res - num1;
		else
		res = num1 + num2;
		cout<<num1<<" "<<"+"<<" "<<num2<<" "<<"="<<" "<<res<<endl;
	}
}
