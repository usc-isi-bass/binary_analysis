#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int queue[90010];//?? 

int main()
{
   // freopen("1.in","r",stdin);
   // freopen("1.out","w",stdout);
    int n,m;
    while(1)
    {
    cin>>n>>m;
    if(n==0&&m==0)  break;
    int front=0,rear=n;//??????????????????? 
    for(int i=0;i<n;i++)
      queue[i]=i+1;
    for(int i=0;i<n-1;i++)
    {
            for(int j=1;j<m;j++)
            {
                    queue[rear++]=queue[front];
                    front++;
            }
            front++;
    }
    cout<<queue[front]<<endl;//??????????????? 
    }
    return 0;
}
