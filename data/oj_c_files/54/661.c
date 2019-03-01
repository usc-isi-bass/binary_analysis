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

void main()
{ int n,k;
scanf("%d %d",&n,&k);
int i=0,j=0,b=0;
j=n-1;
do{b=j;j=j+n-1;
for(i=0;i<=n;)
{if(b%(n-1)==0)
{b=b/(n-1)*n+k;i++;}
else break;
}
if(i!=n)  continue;
else break;
}while(i!=n);
printf("%d\n",b);
}