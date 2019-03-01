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
	int m=0,n,a[6]={0},i;
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{
		a[i]=n%10;
		n=n/10;
		
		m=m*10+a[i];
		if(n==0)
			break;
	}
	printf("\n%d",m);
}