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
    int a[100][15],b[100]={0},i,j,k,s,m=0,x;
    for(i=0;;i++)
  {
    scanf("%d",&a[i][0]);
    if(a[i][0]==-1) break;
    else
    {
      for(j=1;;j++)
      {b[m]++;
        scanf("%d",&a[i][j]);
        if(a[i][j]==0) break;
        else continue;}
        m++;
    }
  }

        for(i=0;i<m;i++)
        {x=0;
        for(j=0;j<b[i];j++)
        {s=0;
        for(k=0;k<b[i];k++)
        {if(a[i][k]*2==a[i][j])
        s=s+1;}
        x=x+s;}
        printf("%d\n",x);
        }

        return 0;
}
