/*
Enia is in danger! Evil dark mage Deimos invaded from another world, and not alone, but with countless army of darkness. Court magician Irdis had failed to defeat Deimos in the magic duel, so he hid in the basement of the palace and decided to step back through a portal to call one his old acquaintance for help. But such a turn is not in Deimos' plans, so he wants not to release his opponent alive.

Irdis knows n different spells to create a portal, any of which is acceptable to get away from Deimos. But at the same moment when Irdis started to whisper the words of one of these spells, Deimos realised the opponent's plan. Deimos knows which exactly spells of portal creation are known by Irdis. Deimos can block each of these spells. Once a spell is blocked, it's impossible to use this spell within the palace, so some different spell should be used to escape. Irdis spends ai seconds to read the i-th spell, and Deimos needs bi seconds to block this spell. If Irdis finishes reading the spell, which has not been already blocked by Deimos, the portal will open and Irdis will be able to leave the palace. Deimos can read the blocking spell even in the case when Irdis hasn't started the corresponding portal spell yet. Neither Irdis nor Deimos knows which spell is now being read by another mage.

Can Deimos acts so that Irdis will not be able to leave with guarantee?

Input
The first line contains the single integer n (1 ≤ n ≤ 105) — the number of the portal spells Irdis has. Then in the second line there are n integers separated by the spaces: ai (1 ≤ ai ≤ 109) — the time required to read the i-th portal spell by Irdis. In the third line, analogically, there are n integers separated by the spaces: bi (1 ≤ bi ≤ 109) — the time required for Deimos to block the i-th spell.

Output
In the only line output «Redemption» (without quotes), if for any actions of Deimos Irdis has a chance to escape. Otherwise, if there exists a sequence of Deimos' actions for which Irdis is guaranteed to be unable to leave, output «Dire victory» (without quotes).

Sample test(s)
input
2
17 6
10 5
output
Dire victory
input
2
17 6
12 5
output
Redemption
Note
In the first sample Deimos blocks the second spell from 0-th to 5-th seconds, and the first spell from 5-th to 15-th seconds. So the first spell will be blocked since the 15-th second, and the second spell since the 5-th second. Irdis can finish reading the first spell only by the end of the 17-th second, and the second spell — by the end of the 6-th second. So Irdis cannot leave in any case.

In the second sample, if Deimos blocks spells starting from first, then the second spell will be blocked by the end of the 17-th second. In this case, if Irdis reads the second spell from 0-th to 6-th second, then it will have time to work before the blocking occures. In the case where Deimos blocks spells starting from the second, the first one is blocked by the end of the 17-th second. So if Irdis reads the first spell from 0-th to 17-th second, the portal will be created at the same moment the first spell becomes blocked, and Irdis will be able to leave.
*/
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
long long int MAX(long long int a,long long int b)
{
if(a>b)
return a;
return b;
}

typedef struct array
{

  long long   int first;
   long long  int second;
    long long int index;
}data;

bool arrange(data a ,data b)
{
     return a.first<b.first;
}


int main()
{
 int n,i;
 scanf("%d",&n);
 //long long int a[n+2];
 //long long int b[n+2];
 long long int min=1000000009;
 long long int max=0;

 data p[n+2];
 for(i=0;i<n;i++)
 {
  scanf("%I64d",&p[i].first);
  // min=MIN(min,a[i]);
 // printf("\t %I64d\n",p[i].first);
 }
 //scanf("%I64d",&max);
 for(i=0;i<n;i++)
 {
      scanf("%I64d",&p[i].second);
    //  max=max+b[i];
   // printf("\t %I64d \n",p[i].second);
      p[i].index=i;
 }
 //printf("%I64d %I64d\n",min,max);
 //sort(p.begin(),p.end());
  sort(p,p+n,arrange);
 int flag=0,sum;
 sum=0;

 for(i=0;i<n;i++)
 {
     if(sum+p[i].second<p[i].first)
     {
         sum=sum+p[i].second;
     }
     else
     {
         flag=1;
         break;
     }
 }

 if(flag==1)
 {
     printf("Redemption");
 }
 else
 {
     printf("Dire victory");
 }
return 0;
}
