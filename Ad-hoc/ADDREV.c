#include<stdio.h>
#include<string.h>
int main()
{
string s1,s2,s3,s4;
long int no,n,m,i,j;
scanf("%ld",&no);
while(no--)
{
scanf("%s %s",s1,s2);
s3=strrev(s1);
s4=strrev(s2);
n=s3.length();
m=s4.length();
if(n>m)
{
j=n-1;
bool carry=0;
for(i=m-1;i>=0;i--,j--)
{
if((s3[j]-'0')+(s4[i]-'0')+carry>9)
{
s3[j]=((s3[j]-'0')+(s4[i]-'0')+carry)%10+'0';
carry=1;
}
else
{
s3[j]=((s3[j]-'0')+(s4[i]-'0')+carry)+'0';
carry=0;
}}
if(carry)
{
while(j>=0&&carry)
{
if((s3[j]-'0')+carry>9)
{
s3[j]=((s3[j]-'0')+carry)%10+'0';
carry=1;}
else
{
s3[j]=((s3[j]-'0')+carry)+'0';
carry=0;}}}
i=0;
while(s[i]!='0'&&i<)
i++;
}
else
{
j=m-1;
bool carry=0;
for(i=n-1;i>=0;i--,j--)
{
if((s3[i]-'0')+(s4[j]-'0')+carry>9)
{
s4[j]=((s3[j]-'0')+(s4[j]-'0')+carry)%10+'0';
carry=1;
}
else
{
s4[j]=((s3[i]-'0')+(s4[j]-'0')+carry)+'0';
carry=0;
}}
if(carry)
{
while(j>=0&&carry)
{
if((s4[j]-'0')+carry>9)
{
s4[j]=((s4[j]-'0')+carry)%10+'0';
carry=1;}
else
{
s4[j]=((s4[j]-'0')+carry)+'0';
carry=0;}}}}
printf("%s\n",s4);}
return 0;
}

