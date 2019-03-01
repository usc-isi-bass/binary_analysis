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
int m,n=0,y=0;
int i;
scanf("%d",&m);
n=m;
y=n;
    for(i=0;i<100;i++)
{
if(y==0||y==1)
{
printf("End\n");
break;
}
else
{
if(n%2==0)
{
            y=n/2;
printf("%d/2=%d\n",n,y);
n=y;
}
else 
{
y=n*3+1;
printf("%d*3+1=%d\n",n,y);
n=y;
}
//printf("%d\n",y);
}
}
return 0;
}
