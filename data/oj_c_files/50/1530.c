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
	int n,m;
		int sz[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);

	for(int i=0;i<12;i++)
	{m=0;
		for(int j=0;j<i;j++)
		{
			m+=sz[j];
		}
		if((m+n+12)%7==5)
			printf("%d\n",i+1);
	}
	return 0;
}









