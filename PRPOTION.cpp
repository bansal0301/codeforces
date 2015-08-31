#include<stdio.h>
#include<algorithm>
using namespace std;
long long int MAX(long long int a,long long int b)
{
 if(a>b)
  return a;
  else
  return b;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int r,g,b,m,i;
  scanf("%d %d %d %d",&r,&g,&b,&m);
  long long int x[r+2],y[g+2],z[b+2];
  for(i=0;i<r;i++)
  {
   scanf("%lld",&x[i]);
  }
  for(i=0;i<g;i++)
  {
   scanf("%lld",&y[i]);
  }
  for(i=0;i<b;i++)
  {
   scanf("%lld",&z[i]);
  }
  sort(x,x+r);
  sort(y,y+g);
  sort(z,z+b);
  for(i=0;i<m;i++)
  {
   if(x[r-1]>=y[g-1]&&x[r-1]>=z[b-1])
   {
    x[r-1]=x[r-1]/2;
   }
   else if(y[g-1]>=x[r-1]&&y[g-1]>=z[b-1])
   {
     y[g-1]=y[g-1]/2;
   }
   else
   {
    z[b-1]=z[b-1]/2;
   }
  }
  printf("%lld\n",MAX(x[r-1],MAX(y[g-1],z[b-1])));
 }
 return 0;
}
