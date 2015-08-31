//bansal0301
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<limits.h>
#include<stack>
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
  int i,j,k,l,n,m;
  scanf("%d",&n);
  char a[n+2][n+2];
  for(i=0;i<n;i++)
   scanf("%s",a[i]);

   int flag=0;
   int count=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i][j]=='o')
           {
               count=0;
               if(a[i-1][j]=='o'&&i>0)
                 count++;
                if(a[i+1][j]=='o'&&i<n-1)
                 count++;
                if(a[i][j-1]=='o'&&j>0)
                 count++;
                  if(a[i][j+1]=='o'&&j<n-1)
                   count++;

                 if(count%2!=0)
                  {
                      flag=1;
                      break;
                  }
           }


       }
           if(flag==1)
                break;

   }
    if(flag==0)
     printf("YES\n");
    if(flag==1)
     printf("NO\n");

return 0;
}
