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

int main(){
int n;
scanf("%d",&n);
int ss[n],sz[n],i=0,zc[n];
for(i=0;i<n;i++)
{
    scanf("%d %d",&(ss[i]),&(sz[i]));
    zc[i]=0;
}
int j=0,zui=0;
for(i=0;i<n;i++)
{
     if((ss[i]>=90)&&(ss[i]<=140)&&(sz[i]<=90)&&(sz[i]>=60))
     {
         zc[j]++;
     }
     else
     {
         j++;
     }
}
for(i=0;i<n;i++)
{
    if(zc[i]>zui)
    {
        zui=zc[i];
    }
}
printf("%d",zui);
return 0;
}
