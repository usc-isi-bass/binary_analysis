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
int m,n,k,i=1,j=0,x;
scanf("%d%d",&n,&k);
for(i=1;j<n-1;i++)
{x=i;j=0;
while((n*x+k)%(n-1)==0)
{x=(n*x+k)/(n-1);j++;
if(j==n-1)break;}
}
printf("%d",n*x+k);
return 0;
}