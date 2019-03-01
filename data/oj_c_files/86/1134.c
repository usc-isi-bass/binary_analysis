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


int main()
{
    int a;int i,j,m,n,k;
    scanf("%d",&a);
    int time;int times[a];
    int jump[30][30];
    for(i=0;i<a;i++)
    {
        times[i]=60;
        scanf("%d",&m);
        for(j=0;j<m;j++)
            scanf("%d",&jump[i][j]);
        for(k=0;k<m;k++)
        {
            if(jump[i][k]>=times[i]) times[i]+=3;
            else if(times[i]-jump[i][k]==1) times[i]+=2;
            else if(times[i]-jump[i][k]==2) times[i]+=1;
            times[i]-=3;
        }
    }

    for(i=0;i<a;i++)
        printf("%d\n",times[i]);
    return 0;
}
