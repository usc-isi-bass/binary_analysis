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
	int thir[MON], i, w;
	scanf("%d", &w);
	thir[0]=13+w-1;
    thir[1]=31+13+w-1;
    thir[2]=31+28+13+w-1;
    thir[3]=31+28+31+13+w-1;
    thir[4]=31+28+31+30+13+w-1;
    thir[5]=31+28+31+30+31+13+w-1;
    thir[6]=31+28+31+30+31+30+13+w-1;
    thir[7]=31+28+31+30+31+30+31+13+w-1;
    thir[8]=31+28+31+30+31+30+31+31+13+w-1;
    thir[9]=31+28+31+30+31+30+31+31+30+13+w-1;
    thir[10]=31+28+31+30+31+30+31+31+30+31+13+w-1;
    thir[11]=31+28+31+30+31+30+31+31+30+31+30+13+w-1;
	for (i=0; i<MON; i++)
	{
		if (thir[i]%7==5)
		{
			printf("%d\n", i+1);
		}
	}
	return 0;
}