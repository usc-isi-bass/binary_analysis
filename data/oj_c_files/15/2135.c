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
	int n,i,j,pi=0,pj,r=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(pj=0,j=0;j<n;j++)
		{
			scanf("%d",&a);
			if(a==0){pj++;r++;}
		}
		if(pj!=0)pi++;
	}
	printf("%d",(r/2-pi)*(pi-2));
}
