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
int n,m,i,j,k,l,flag=0,flag2=0;
cin>>n>>m;
cout<<n<<m<<endl;
char s[n+5][m+5];
for(i=0;i<n;i++)
scanf("%s",s[i]);
for(i=0;i<n-1;i++)
{
    for(j=0;j<m-1;j++)
    {
        for(k=2;k<=n-i;k++)
        {
            printf("k=%d",k);
            flag2=0;
            printf("\n\n");
            for(int it=2;it<=m-j;it++)
            {
                printf("it=%d\n",it);
                flag2=0;
                for(l=i;l<i+k;l++)
                {
                    if(s[l][j]!=s[i][j])
                    {
                    printf("%d %d %d\n",l,i,j);
                    flag2=1;
                    }
                    if(s[l][it+j]!=s[i][j])
                    {
                    printf("%d %d %d\n",l,i,j);
                    flag2=1;
                    }
                }
                for(l=j;l<j+it;l++)
                {
                 if(s[i][l]!=s[i][j])
                    {
                    printf("%d %d %d\n",l,i,j);
                    flag2=1;
                    }
                if(s[i+k][l]!=s[i][j])
                    {
                    printf("%d %d %d\n",l,i,j);
                    flag2=1;
                    }
                }
                if(flag2==0)
                {
                flag=1;
                break;
                }

            }
            printf("\n\n");
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    break;
}
if(flag==1)
{
    printf("Yes\n");
}
else
{
    printf("No\n");
}
return 0;
}
