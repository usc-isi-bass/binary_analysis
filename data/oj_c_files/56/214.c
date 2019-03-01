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
	long int x[4];
    int i,t;
	for(i=0;i<4;i++)
	{
		scanf("%ld",&x[i]);
	    while (x[i]>0)

		{
		t=x[i]%10;
		printf("%d",t);
		x[i]=(x[i]-t)/10;
		}
	    printf("\n");
	}
		return 0;
}