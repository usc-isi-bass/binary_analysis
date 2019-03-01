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
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i,j,m,b[11];
	scanf("%d",&w);
	for(i=0; i<12; i++)
	{
	    m=12;
		for(j=0; j<i; j++)
		{
			m+=a[j];
		}
		b[i]=(m%7+w)%7;
		if(b[i]==5)
			printf("%d\n",i+1);

	}
	return 0;
}

			
