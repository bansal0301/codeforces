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
int n;
 cin>>n;
 string str;
 cin>>str;
 int flag=0;
 for(int i=0;i<n;i++)
 {
  //   cout<<str[i];
     if(str[i]=='*')
     {
         //printf("%d",i);
         for(int j=i+1;j<n;j++)
            {
              if(str[j]=='*')
              {
                  int c=j-i;
                  if(str[j+c]=='*'&&str[j+2*c]=='*')
                  {
                      //printf("%d %d %d %d ",i,j,j+c,j+2*c);
                      flag=1;
                      break;
                  }
              }
            }
            if(flag==1)
            break;
     }
 }
 if(flag==1)
 printf("yes\n");
 else
 printf("no\n");




return 0;
}
