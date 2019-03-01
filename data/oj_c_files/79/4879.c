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
{
int n[800], m[800], i, k,l=0,s=0;
for(k=0;1;k++)
{
	scanf("%d %d", &n[k], &m[k]);
	if(n[k]==0&&m[k]==0)
	break;
}
for(k=0;1;k++)
{if(n[k]==0&&m[k]==0)
break;
else if(n[k]==1)
printf("%d\n",n[k]);
else
{	for (i=2; i<=n[k]; i++) s=(s+m[k])%i;
printf ("%d\n", s+1);
s=0;}
}
}
