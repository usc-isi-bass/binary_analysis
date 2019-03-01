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
	int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	int b[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	int i,n,D=13;
	scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		if((b[i]+D+n-1)%7==5) printf("%d\n",a[i]);
	}
}