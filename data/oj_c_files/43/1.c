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
	int n,i,b,t,j;
    scanf("%d",&n);
    for (i=3;i<=n/2;i=i+2)
	{
		t=n-i;
		b=1;
		for (j=2;j<i;j++)	
			if (i%j==0) b=0;
		for (j=2;j<t;j++)	
			if (t%j==0) b=0;
		if (b==1) printf("%d %d\n",i,t);
	}
	return 0;
}