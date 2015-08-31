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
    int p,q,l,r,i,j,k;
    scanf("%d %d %d %d",&p,&q,&l,&r);
    int a1[p+2][2];
    int a2[p+2][2];
    for(i=0;i<p;i++)
    {
        scanf("%d %d",&a1[i][0],&a1[i][1]);
    }

    for(i=0;i<q;i++)
    {
        scanf("%d %d",&a2[i][0],&a2[i][1]);
    }
    int flag=0,count=0;
    for(i=l;i<=r;i++)
    {
        flag=0;
        for(j=0;j<p;j++)
        {
            flag=0;
            for(k=0;k<q;k++)
              {
                  flag=0;

                  if(i>16)
                  {
                      //printf("%d %d %d %d \n",a1[j][0],a1[j][1],a2[k][0]+i,a2[k][1]+i);
                  }
                  if(a1[j][0]>=a2[k][0]+i && a1[j][0]<=a2[k][1]+i)
                  {
                      count++;
                      flag=1;
                      //printf("%d %d \n",i,count);
                     break;
                  }
                  else if(a1[j][1]>=a2[k][0]+i&&a1[j][1]<=a2[k][1]+i)
                  {
                      count++;
                      flag=1;
                     //printf("%d %d \n",i,count);
                 break;
                  }
                  else if(a2[k][0]+i>=a1[j][0]&&a2[k][0]+i<=a1[j][1])
                  {
                      count++;
                      flag=1;
                      //printf("%d %d \n",i,count);
                       break;
                  }
                  else if(a2[k][1]+i>=a1[j][0]&&a2[k][1]+i<=a1[j][1])
                  {
                      count++;
                      flag=1;
                      //printf("%d %d \n",i,count);
                      break;
                  }
              }
              if(flag==1)
              {
               // printf("%d %d \n",i,count);
                break;
              }
        }
    }
    printf("%d\n",count);
return 0;
}
