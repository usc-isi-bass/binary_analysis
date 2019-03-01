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

int main(int argc, char* argv[])
{
	int w,d=12,i;
	scanf("%d",&w);
	int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<13;i++)
	{
		d+=p[i];
		if(d%7+w==5||d%7+w==12)
			printf("%d\n",i+1);
	}
}


