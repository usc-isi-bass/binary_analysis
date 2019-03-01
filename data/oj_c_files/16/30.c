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
	int a[4], b, i;
	scanf("%d", &b);
	if(b==10000)
		printf("00001");
	else
    {    
		for(i=0; i<=3; i++)
		    a[i]=b%(int)pow(10, i+1)/(int)pow(10, i);
	    for(i=0; i<=3; i++)
			if(b>=pow(10, i))
                printf("%d", a[i]);
	}
	return 0;
}
