//bansal0301
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<vector>
#include<queue>
#include<ctype.h>
#include<map>
# define CASE int t;scanf("%d",&t);while(t--)
# define LL long long int
using namespace std;
int MIN(int a ,int b)
{
if(a>b)
return b;
return a;
}
int MAX(int a,int b)
{
if(a>b)
return a;
return b;
}
int main()
{

string s;
char c;
cin>>s;
int l=s.length();
//scanf("%s",&s);
int flag=0;
//cout<<l;
char ma;
int index;
ma=s[l-1];
for(int i=0;i<l;i++)
{
    if((s[i]-48)%2==0&&s[i]<ma)
    {
       ma=s[i];
       index=i;
       flag=1;
       break;
    }
}
if(flag==1)
{
      c=s[l-1];
       s[l-1]=s[index];
       s[index]=c;
cout<<s<<endl;
}
else
{
    flag=0;
    char ma;
    ma='0';
    int index=0;
for(int i=0;i<l;i++)
 {
         if((s[i]-48)%2==0)
         {
             index=i;
             flag=1;
         }
 }
 if(flag==1)
 {
       c=s[l-1];
       s[l-1]=s[index];
       s[index]=c;

   cout<<s<<endl;
 }
 else
 {
 cout<<"-1"<<endl;
 }
}


return 0;
}

