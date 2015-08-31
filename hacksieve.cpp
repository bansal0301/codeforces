#include<stdio.h>
int ar[1000006]={0};
int main()
{

    int t,n,i,j;

    for(i=2;i<=1001;i++)
    {
        if(ar[i]==0)
        {

            for(j=2;i*j<1000002;j++)
            {
                ar[i*j]++;
            }
        }
    }

    for(i=2;i<1000002;i++)
    {
        if(ar[i]==0)
        ar[i]=1;
    }

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        printf("%d\n",ar[n]);
    }

    return 0;
}
