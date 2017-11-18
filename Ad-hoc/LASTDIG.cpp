#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll a,ll b)
{
	if(b==0)
		return a%10;
	else if(b%2==0)
		return (power(a,b/2)%10 * power(a,b/2)%10)%10;
	else
		return (a%10 * power(a,b/2)%10 * power(a,b/2)%10)%10;
}
int main()
{
    ll a,b,no;
    cin>>no;
    while(no--)
    {
    	cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}