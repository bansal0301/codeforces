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
long long int MAX(long long int a ,long long int b)
{
if(a<b)
return b;
return a;
}

int main()
{
long long int n,a,b,ans,i;
cin>>n>>a>>b;
long long int min1=MIN(a,b);
long long int max1=MAX(a,b);
if((6*n)%min1==0&&(6*n)/min1>=max1)
{
    cout<<6*n<<endl;
    cout<<min1<<" "<<(6*n)/min1;
}
else if((6*n)%max1==0&&(6*n)/max1>=min1)
{
     cout<<6*n<<endl;
     cout<<(6*n)/max1<<" "<<max1;
}
else if((6*n)/min1<max1)
{
    cout<<min1*max1<<endl;
    cout<<min1<<" "<<max1;
}


else if((6*n)/min1>max1||(6*n)/max1>min1)
{
    cout<<6*n<<endl;
    for(i=min1;i<=sqrt(6*n)+1;i++)
    {
        if((6*n)%i==0)
         {
             cout<<i<<" "<<(6*n)/i;
             break;
         }
    }
   // cout<<min1<<" "<<(6*n)/min1;
}
else if ((6*n)/min1==max1||(6*n)/max1==min1)
{
    if(6*n<=(min1*(max1+1)))
    {
        cout<<min1*(max1+1)<<endl;
        cout<<min1<<" "<<max1+1;
    }
    /*else
    {
        long long int p1,p2;
        p1=min1;
        p2=max1;
        while(6*n>(min1*(max1+1)))
        {
            if(min1*(max1+1)<(p1+1)*p2)
            {
                p2=max1;
                max1=max1++;
            }
            else if((p1+1)*p2>(min1*max1+1))
            {
                p1=min1;
                min1++;
            }
        }
            cout<<min1*(max1+1)<<endl;
            cout<<min1<<" "<<max1+1;

    }*/
}


cout<<endl;
return 0;
}
