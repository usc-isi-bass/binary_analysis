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
int n,k,a,i;
i=1;
scanf("%d %d",&n,&k);
if(n==2)a=8-k;
else{
	a=n;
	do
	{
	a=a*n;
	i=i+1;
	}while(i!=n);
	a=a-(n-1)*k;
}
printf("%d",a);
}