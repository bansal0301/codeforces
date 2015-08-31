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
int n,k;
scanf("%d %d",&n,&k);
//cout<<n<<endl;
int a[n+2],b[n+2];
for(int i=0;i<n;)
 {
     scanf("%d",&a[i]);
     b[i]=a[i];
     i++;
 }
 sort(b,b+n);
 if(b[n-1]-b[0]>k)
 {
     printf("NO\n");
 }
 else
 {
     b[0]=k;
     for(int i=1;i<k;i++)
     {
         b[i]=i;
     }
     printf("YES\n");
     for(int i=0;i<n;i++)
     {
         for(int j=1;j<=a[i];j++)
         {
             /*int t1=j%(k);
             int t2=j/(k);
             int t3=t1;
             if(t2!=0)
             {
               t3=t1+1;
             }*/
             int  t3=b[j%k];
             printf("%d ",t3);
         }
         printf("\n");
     }

 }
return 0;
}
