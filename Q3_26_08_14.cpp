//bansal0301
#include<stdio.h>
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
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
sort(a,a+n);
//reversesort(a);
for(int i=0;i<n/2;i++)
{
    int temp=a[i];
    a[i]=a[n-i];
    a[n-i]=temp;
}
int sum=0;
sum=sum+a[0]*n;
int m=n;
if(n>1)
{
for(int i=1;i<n;i++)
{
    printf("%d\n",sum);
 sum=sum+a[i]*m;
 m--;
}
}
printf("%d\n",sum);

return 0;
}
