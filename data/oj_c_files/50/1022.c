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
	int  w,i;
	int m=0;
	int t=0;
	int a[15]={0,31,59,90,120,151,181,212,243,273,304,334};
	scanf("%d",&w);
	if(w>=1&&w<=5)
		m=6-w;
	else if(w>=6&&w<=7)
		m=13-w;
    for(i=0;i<=11;i++)
		if((a[i]+13-m)%7==0)
		{
			t=i+1;
			printf("%d\n",t);
		}
		return 0;
}

