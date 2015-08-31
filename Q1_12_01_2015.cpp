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
int a,b,c,d,t,p1,p2;
scanf("%d %d %d %d",&a,&b,&c,&d);
int t1,t2;
t1=a-((a)/250)*c;
p1=MAX((3*a)/10,t1);

t2=b-((b)/250)*d;
p2=MAX((3*b)/10,t2);

cout<<p1<<" "<<p2;
if(p1>p2)
{
    cout<<"Misha"<<endl;
}
else if(p1<p2)
{
    cout<<"Vasya"<<endl;

}
else
{
    cout<<"Tie"<<endl;

}
return 0;
}
