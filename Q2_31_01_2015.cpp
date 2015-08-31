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
int n,k;
string s;
cin>>s;
int l=s.length();
//cout<<l;
double a[l+3];
a[0]=0.000000;
for(int i=0;i<l;i++)
{
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
    {
        a[i+1]=a[i]+1.0;
    }
    else
    {
        a[i+1]=a[i];
    }
}
/*
for(int i=0;i<=l;i++)
{
    cout<<a[i]<<" ";
}
*/
double ans=0.000000;
for(int i=1;i<=l;i++)
{
    for(int  j=1;j<=i;j++)
    {
        ans=ans+((a[i]-a[i-j])/j);
    }
  //  cout<<ans<<endl;
}
printf("%.7f\n",ans);
return 0;
}
