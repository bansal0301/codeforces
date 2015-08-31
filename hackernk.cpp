#include<stdio.h>
#include<string.h>
#include<queue>
#define pp pair<int,int>
using namespace std;
int ix[]={0,1};
int iy[]={1,0};
int n;
bool check(int x,int y)
{
    if(x<0||x>(n-1)||y<0||y>(n-1))
    return false;
    else
    return true;
}
int dist[1003][1003]={0};
char ar[1003][1003];
int main()
{
    int t,px,py,kx,ky,x,y,i,j;



    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        bool vis[1003][1003]={false};
        memset(dist,0,sizeof(dist));

        for(i=0;i<n;i++)
        scanf("%s",&ar[i]);

        pp temp,tmp;

        queue<pp>q;

        temp.first=0;
        temp.second=0;
        q.push(temp);
        vis[0][0]=true;
        dist[0][0]=1;

        while(!q.empty())
        {
            //printf("!\n");
            temp=q.front();
            q.pop();

            x=temp.first;
            y=temp.second;

            for(i=0;i<2;i++)
            {
                kx=x+ix[i];ky=y+iy[i];
                if(check(kx,ky)&&!vis[kx][ky]&&ar[kx][ky]!='x')
                {
                    tmp.first=kx;
                    tmp.second=ky;
                    q.push(tmp);
                    vis[kx][ky]=true;

                        //printf("!\n");

                    for(j=0;j<2;j++)
                    {
                        px=kx-ix[j];py=ky-iy[j];
                        if(check(px,py)&&ar[px][py]!='x')
                        {
                            dist[kx][ky]+=dist[px][py];

                            //printf("x=%d y=%d count=%d\n",kx,ky,dist[kx][ky]);
                        }
                    }
                }
                else if(ar[kx][ky]=='x')
                {
                    vis[kx][ky]=true;
                }

            }
        }
        if(dist[n-1][n-1])
        printf("%d\n",dist[n-1][n-1]);

        else
        printf("-1\n");
    }

    return 0;
}
