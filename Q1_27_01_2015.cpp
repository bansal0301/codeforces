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

int n,m,k,t1,t2,ans=0;
cin>>n>>m>>k;
int a[n+2][m+2];
memset(a,0,sizeof(a));
for(int i=1;i<=k;i++)
{
    cin>>t1>>t2;
    a[t1][t2]=1;
    if(a[t1-1][t2]==1&&a[t1-1][t2-1]==1&&a[t1][t2-1]==1)
    {
        if(ans==0)
        ans=i;
    }
    else if(a[t1][t2-1]==1&&a[t1+1][t2-1]==1&&a[t1+1][t2]==1)
    {
        if(ans==0)
        ans=i;

    }
    else if(a[t1-1][t2]==1&&a[t1-1][t2+1]==1&&a[t1][t2+1]==1)
    {
        if(ans==0)
        ans=i;

    }
    else if(a[t1+1][t2]==1&&a[t1+1][t2+1]==1&&a[t1][t2+1]==1)
    {
        if(ans==0)
        ans=i;

    }
}
cout<<ans<<endl;
return 0;
}
