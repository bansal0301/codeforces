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
int n,i,j,k,m,ans=0;
scanf("%d %d %d",&n,&m,&k);
int arr[m+2];
for(i=1;i<=m+1;i++)
{
    scanf("%d",&arr[i]);
}
for(i=1;i<=m;i++)
{
    int j=MAX(arr[m+1],arr[i]);
    int temp=arr[m+1];
    int count=0;
   // printf("\n\n\n");
    while(temp||arr[i])
    {
     //   printf("%d %d %d\n",i,temp%2,arr[i]%2);
        if(temp%2!=arr[i]%2)
        count++;
        temp=temp>>1;
        arr[i]=arr[i]>>1;
    }
    if(count<=k)
    ans++;
}

printf("%d\n",ans);
return 0;
}
