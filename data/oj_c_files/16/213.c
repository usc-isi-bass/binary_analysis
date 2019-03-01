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
int n,i,c,b;
scanf("%d",&n);
if(n==0)printf("0");
for(i=1;i<=n;)
{
	i=i*10;
	c=n%i;
	n=n-c;
	b=c*10/i;
	printf("%d",b);
}
printf("\n");
}
