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
	int n;
	int a[5];
	int i,j;
	scanf("%d",&n);
	for (i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	if (a[4]==0 && a[3]==0 && a[2]==0 && a[1]==0) printf("%d",a[0]);
	else
		if (a[4]==0 && a[3]==0 && a[2]==0) printf("%d%d",a[0],a[1]);
		else
			if (a[4]==0 && a[3]==0) printf("%d%d%d",a[0],a[1],a[2]);
			else
				if (a[4]==0) printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
				else printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}