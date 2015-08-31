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
long long int MIN(long long int a ,long long int b)
{
if(a>b)
return b;
return a;
}
long long int MAX(long long int a,long long int b)
{
if(a>b)
return a;
return b;
}
int main()
{
int n,m,k,i;
scanf("%d %d %d",&n,&m,&k);
long long int a[n+2],dp[n+2];
for(i=0;i<n;i++)
{
     cin>>a[i];
}
m--;
long long int sum=0;

if(m==0)
{
    sort(a,a+n);
    sum=0;
    while(k--)
    {
        sum+=a[n-1];
        n--;
      //  cout<<sum<<" ";
    }
   cout<<sum<<endl;
}
else if(k==1)
{
    for(i=0;i<n-m;i++)
    {
        sum=MAX(sum,a[i]+a[i+m]);
    }
    //printf("%I64d\n",sum);
    cout<<sum<<endl;
}
else
{
  for(i=0;i<n-m;i++)
    {
        dp[i]=a[i]+a[i+m];
    }
   //sort(dp,dp+n-m);
   sum=0;
   long long temp[m+2],ch=0;
   for(i=0;i<=n-m-1;)
   {
       temp[ch]+=dp[i];
       i=i+m+1;
   }
    cout<<sum<<endl;
}
return 0;
}
