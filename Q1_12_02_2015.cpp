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
int t;
scanf("%d",&t);
string str[t][2];
string prt[t][2];

for(int i=0;i<t;i++)
{
    cin>>str[i][0]>>str[i][1];
    /*cout<<str[i][0]<<" "<<str[i][1];
    int len1=str[i][0].length();
    int len2=str[i][1].length();
     cout<<len1<<" "<<len2;
     */
}
int flag=0,ans=0;
for(int i=0;i<t;i++)
{
//    cout<<"\n\n\n"<<str[i][0]<<" "<<str[i][1]<<endl;

     for(int j=0;j<ans;j++)
     {
         if(str[i][0].compare(prt[j][1])!=0)
         {
             flag=0;
         }
         else
         {
             flag=1;
             break;
         }
     }

     if(flag==0)
     {
        // memset(prt[ans],NULL,sizeof(str));
        // memset(prt[ans],NULL,sizeof(str));
         prt[ans][0]=str[i][0];
         prt[ans][1]=str[i][1];
         //printf("%d\n",ans+1);
     //    cout<<prt[ans][0]<<" "<<prt[ans][1]<<endl;
         ans++;
     }
     else
     {
        for(int j=0;j<ans;j++)
        {
            if(str[i][0].compare(prt[j][1])==0)
            {
                //prt[j][i]=NULL;
                prt[j][1]=str[i][1];
  //              cout<<prt[j][0]<<" "<<prt[j][1]<<endl;
                break;
            }

        }


     }


}
printf("%d\n",ans);
for(int j=0;j<ans;j++)
{
    cout<<prt[j][0]<<" "<<prt[j][1]<<endl;
}



return 0;
}
