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
	int a[6],t,i,k,m;
	for (k=1;k<=4;++k)
	{
		scanf("%d",&t);
		m=0;
		for (i=1;t>0;++i)
		{
			a[m]=t%10;
			t=(int)(t/10);
			printf("%d",a[m]);
			m++;
		}
		printf("\n");
	}
		return(0);
}