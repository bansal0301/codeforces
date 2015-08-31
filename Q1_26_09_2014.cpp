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
int main()
{
 int n,c=0,j,k,ans;
 int a[8];
 scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
 {
     sort(a,a+6);
     n=a[2];
     j=-1;
     k=-1;
     for(int i=0;i<6;i++)
     {
         if(a[i]==n)
          c++;
          else{
              if(j==-1)
              {
                  j=a[i];
              }
              else
              k=a[i];

          }
     }
     if(c<4)
     {
         printf("Alien\n");
     }
     else if(c==6)
     {
         printf("Elephant");
     }
     else
     {
         if(j==k)
         {
              printf("Elephant");
         }
         else
         {
             printf("Bear");
         }
     }
 }

return 0;
}
