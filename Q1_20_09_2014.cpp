//bansal0301
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<limits.h>
#include<string.h>
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
    int n,p,q,i;
    scanf("%d",&n);
    int ky[n+2];
    memset(ky,0,sizeof(ky));
    scanf("%d",&p);

    int a1[p+2];

    for(i=1;i<=p;i++)
    {
        scanf("%d",&a1[i]);
        ky[a1[i]]=1;
    }
    scanf("%d",&q);
    int a2[q+2],flag=0;;
    for(i=1;i<=q;i++)
    {
        scanf("%d",&a2[i]);
        ky[a2[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ky[i]==0)
        {
         //  printf("%d %d\n",ky[i],i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

return 0;
}
