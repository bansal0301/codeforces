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

LL arr[100005];
LL n;

long long int gcd(long long int a ,long long int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    long long int i,ans=0,lcm;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    //sort(arr,arr+n);
    lcm=arr[0];
    for(i=1;i<n;i++)
    {
     LL temp= gcd(lcm,arr[i]);
     lcm=(lcm/temp)*arr[i];
     //cout<<lcm<<" "<<temp<<endl;
    }

    //cout<<lcm<<endl;
    int flag=0;

    for(i=0;i<n;i++)
    {
        LL temp=lcm/arr[i];
        while(temp%2==0)
        {
            temp=temp/2;
        }
        while(temp%3==0)
         temp=temp/3;
        if(temp!=1)
        {
            flag=1;
            break;
        }
    }


   if(flag)
   cout<<"No"<<endl;
   else
   cout<<"Yes"<<endl;
return 0;
}
