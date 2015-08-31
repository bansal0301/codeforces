//bansal0301
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string.h>
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
int inp[1000009];
typedef struct array
{
    int index;
    int v;
}data;
bool arrange(data a ,data b)
{
     return a.v<b.v;
}

int main()
{
 int n,i,j=-1,k=-1,ans;
 scanf("%d",&n);
 data a[n+2];
 for(i=1;i<=n;i++)
 {
     scanf("%d",&a[i].v);
     a[i].index=i;
 }
 sort(a+1,a+n+1,arrange);
 int count=0,j1,k1;
 for(i=2;i<=n;i++)
 {
     if(a[i].v==a[i-1].v)
      {
          count++;
        /*  if(j==-1)
          {
              j=a[i].index;
              j1=a[i-1].index;
          }
          else
          {
              k=a[i].index;
              k1=a[i-1].index;
          }
        */
      }
 }
 if(count<2)
 {
     printf("NO\n");
 }
 else
 {
   printf("YES\n");
   for(i=1;i<=n;i++)
   {
       printf("%d ",a[i].index);
   }
   printf("\n");

   for(i=2;i<=n;i++)
   {
       if(a[i].v==a[i-1].v)
       {
           int temp =a[i].index;
           a[i].index=a[i-1].index;
           a[i-1].index=temp;
           j=i;
           break;
       }
   }

   for(i=1;i<=n;i++)
   {
       printf("%d ",a[i].index);
   }
   printf("\n");

   for(i=j+1;i<=n;i++)
   {
       if(a[i].v==a[i-1].v)
       {
           int temp =a[i].index;
           a[i].index=a[i-1].index;
           a[i-1].index=temp;
           j=i;
           break;
       }
   }

   for(i=1;i<=n;i++)
   {
       printf("%d ",a[i].index);
   }
   printf("\n");


 }
return 0;
}
