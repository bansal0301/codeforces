//bansal0301
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<stack>
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
struct a
{
    char data;
    int value;
};
typedef struct a arr;
int arrange(arr a, arr b)
{
    return a.value>b.value;
}
int main()
{
    int i,j,k,l,n,m;
    scanf("%d %d",&n,&m);
    char str[n+2];
    scanf("%s",str);
    arr set[27];
    for(i=0;i<27;i++)
     {
         set[i].data='i+65';
         set[i].value=0;

     }
    for(i=0;i<n;i++)
     {
         set[str[i]-65].value++;

     }
     sort(set,set+27,arrange);
  /*   for(i=0;i<27;i++)
     {
         printf("%c ",set[i].data);
         printf("%d \n",set[i].value);

     }
*/
     i=0;
     int ans=0;
     while(m>0)
     {
         if(set[i].value>m)
          ans=ans+m*m;
         else
          ans=ans+(set[i].value*set[i].value);
         m=m-set[i].value;
         i++;
    //     printf("%d %d\n",ans,m);
    }
     printf("%d\n",ans);
return 0;
}
