#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int a[9][4]={{1,1,1,1},{2,4,8,6},{3,9,7,1},{4,6,4,6},{5,5,5,5},{6,6,6,6},{7,9,3,1},{8,4,2,6},{9,1,9,1}};
int main()
{
    ll b,no,c;
    cin>>no;
    while(no--)
    {
    	cin>>c>>b; 
        if(b==0)
            cout<<"1";
        else if(c%10==0)
            cout<<"0";
        else
        {
        int k=c%10;
        int p=b%4;
        if(p==0)
            p=4;
        cout<<a[k-1][p-1];
    }
    cout<<endl;
    }
    return 0;
}