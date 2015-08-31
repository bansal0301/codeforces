//bansal0301
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<limits.h>
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
    long long int a,n,m,b;
    long long int ans=0;
   // scanf("%d %d %d %d",&n ,&m,&a,&b);
    cin>>n>>m>>a>>b;
    if(m*a>=b)
    {
        if(b*(n/m)+a*(n%m)<b*((n/m)+1))
         ans=b*(n/m)+a*(n%m);
        else
         ans=b*((n/m)+1);
    }
    else
    {
        ans=n*a;
    }
   // printf("%I64d \n",ans);
   cout<<ans<<endl;
return 0;
 }
