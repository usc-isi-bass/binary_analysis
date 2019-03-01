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
{int w, i, d, t;
int a[12]={12,43,71,102,132,163,193,224,255,285,316,346};

scanf("%d",&w);
for(i=0, t=0;i<12;i++)
{
	d=a[i]%7+w;
	if(d>7)
	{d=d-7;}
	
	if(d==5)
	{
		if(t==0)
		{printf("%d\n",i+1);}
		else
		{printf("\n%d\n",i+1);}
	}
}
return 0;
}