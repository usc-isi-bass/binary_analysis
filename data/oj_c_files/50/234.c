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
	int n,i,t,a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		t=a[i]%7;
		if((t+n<=8 && t+n-1==5) || t+n>8 && t+n-7-1==5)
			printf("%d\n",i+1);
	}
}
		