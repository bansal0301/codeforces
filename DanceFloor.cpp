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
typedef struct array
{
    int value;
    int index;
}data;
bool arrange(data a ,data b)
{
     return a.value<b.value;
}

int main()
{
 long long int n,m,w,s;
 //scanf("%d",&n);
 cin>>n;
 long long int arr[n+2][3];
 //long long int wm[n+2],mm[n+2],sm=0,sw=0;
 data wm[n+2],mm[n+2];
 for(int i=0;i<n;i++)
 {
 // scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
   mm[i].value=MIN(arr[i][0],(arr[i][2]));
   mm[i].index=i;
   wm[i].value=MIN(arr[i][1],(arr[i][2]));
   //sw=MAX(sw,wm[i]);
   wm[i].index=i;
 }
 long long int ans=0;
 /*for(int i=0;i<n;i++)
 {
     ans=MAX(MAX(ans,mm[i]*wm[i]) , MIN(wm[i],MIN(mm[i],(arr[i][2]/2))));
 }
 */
 sort(wm,wm+n,arrange);
 sort(mm,mm+n,arrange);
 if(n!=1)
 {
     while(n--)
     {
        if(wm[n-1].index==mm[n-1].index)
        {
            ans+=MAX(wm[n-2].value,mm[n-2].value);
        }
        else
        {
            ans+=MIN(mm[n-1].value,wm[n-1].value);

        }
     }
 }
if (n==1)
 {
     ans=MIN(wm[0].value,MIN(mm[0].value,(arr[0][2]/2)));
 }
 cout<<ans<<endl;
return 0;
}
