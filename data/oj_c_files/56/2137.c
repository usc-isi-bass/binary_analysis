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
	int n,a[5],i,j;
	scanf("%d",&n);
	a[0]=n/10000;
	a[1]=(n-a[0]*10000)/1000;
	a[2]=(n-a[0]*10000-a[1]*1000)/100;
	a[3]=(n-a[0]*10000-a[1]*1000-a[2]*100)/10;
	a[4]=(n-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10);
	for(i=4;i>=0;i--)
	{
		if(a[i]==0)
			break;
		printf("%d",a[i]);
	}
	return 0;
}