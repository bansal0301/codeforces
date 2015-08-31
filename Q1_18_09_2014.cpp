//bansal0301
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
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
int n,i,j,k,m,ans=0,x,y;
scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d %d",&x,&y);
   if(y-x>=2)
   ans++;
}
printf("%d\n",ans);
return 0;
}
