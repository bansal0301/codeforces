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
    long long int n;
    scanf("%lld",&n);
    if(n<4)
    {
        printf("NO\n");
    }
    else
    {
        long long int var=n*(n-1),i;
        printf("%lld * %lld = %lld \n",n,n-1,var);
        for(i=n-2;i>4;)
        {
            if(i-1<=4)
            {
                if(var>24)
                {
                     // var=var-i;
                      printf("%lld - %lld = %lld\n",var,i,var-i);
                      i=3;
                      var=var-5;
                }

            }
             else if(var<24)
            {
                printf("%lld * %lld = %lld\n",i,i-1,i*(i-1));
                printf("%lld + %lld = %lld\n",var,i*(i-1),var+i*(i-1));
                var=var+i*(i-1);
                i-=2;
            }
            else if(var>24)
            {
                 printf("%lld * %lld = %lld\n",i,i-1,i*(i-1));
                 printf("%lld - %lld = %lld\n",var,i*(i-1),var-i*(i-1));
                 var=var-i*(i-1);
                 i-=2;
            }
            else if(var==24)
            {
                printf("%lld - %lld = 1\n",i,i-1);
                printf("24 + 1 = 25\n");
                var=25;
                i-=2;
            }
        }
        printf("%lld\n",var);





    }


return 0;
}
