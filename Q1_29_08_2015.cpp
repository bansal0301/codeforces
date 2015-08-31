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
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
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

int arr[200];
int n;

int f_max(int n)
{
     int i;
     int ma=INT_MIN;
     int mai;
    for(i=1;i<n;i++)
    {
     //   cout<<i<<"->"<<arr[i]<<endl;
        if(ma<arr[i])
        {
            ma=arr[i];
            mai=i;
       //     cout<<ma<<"in";
        }

    }
   // cout<<mai<<"mai";
    return mai;
}

int main()
{
    int i,ans=0,ind,mi,ma,mii,mai;
    cin>>n;
    ma=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(ma<arr[i])
        {
            ma=arr[i];
            mai=i;
         //   cout<<ma<<mai<<endl;

        }

    }
    //cout<<mai<<" fg";
    while(1)
    {
        ma=f_max(n);
      //  cout<<ma<<"sd"<<endl;
        if(arr[ma]<arr[0])
        {
            break;
        }
        arr[0]+=1;
        arr[ma]-=1;
        ans++;

    }
    cout<<ans<<endl;

return 0;
}
