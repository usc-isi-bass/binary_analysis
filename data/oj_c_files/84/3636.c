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
	int n,i,max,secondmax;
	int num[100];

	scanf("%d",&n);

	scanf("%d",&num[0]);
	max=num[0];
	secondmax=num[0];

	for(i=1;i<n;i++)
	{
		scanf("%d",&num[i]);

		if(num[i]>max)
			max=num[i];
		else if(num[i]>secondmax)
			secondmax=num[i];
	}

	printf("%d\n%d\n",max,secondmax);
}
