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
	int max,m=0,a[300],i;
	scanf("%d",&a[0]);
	max=a[0];i=1;
	while(scanf(",%d",&a[i]))
	{
		if(a[i]>max){m=max;max=a[i];}
		else if(a[i]>m&&a[i]<max) m=a[i];
	}
	if(m==0) printf("No\n");
	else printf("%d\n",m);
	return 0;
}
