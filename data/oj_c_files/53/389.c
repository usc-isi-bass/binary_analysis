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
	int a[300];
	int i,k,n,p=1;
	scanf("%d'",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			if(a[k]==a[i])
				p=p*0;
			else
				p=p*1;
		}
		if(p==1)
		    printf(",%d",a[i]);
		else
			p=1;
	}
}