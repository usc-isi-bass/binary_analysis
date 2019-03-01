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
	int w,i,a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d",&w);
	w=w+12;
	for(i=0;i<=11;i++)
	{
		w=w+a[i];
		if(w%7==5)
			printf("%d\n",i+1);
	}
}