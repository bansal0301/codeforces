#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define mod 1000000007
int arr[10000000+7]={0};
long long int fun(long long int n)
{
    if(arr[n]==0)
    {
        // arr[n]=(7*fun(n-2))%mod;
        arr[n]=(3*(((2*fun(n-2))%mod)+(((fun(n-2))/3)%mod))%mod)%mod;
        return arr[n];
    }
    else
    return arr[n];
}
int main()
{
long long int n,ans;
//scanf("%I64d",&n);
cin>>n;
//printf("%I64d",n);
arr[1]=0;
arr[2]=3;
arr[3]=6;
if(n==1)
cout<<"0\n";
else if(n==2)
cout<<"3\n";
else if(n==3)
cout<<"6\n";
else
{
    //ans=(7*fun(n-2))%mod;
    ans=(3*(((2*fun(n-2))%mod)+(((fun(n-2))/3)%mod))%mod)%mod;
    printf("%I64d\n",ans);
}
return 0;
}
