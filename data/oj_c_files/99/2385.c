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
	int i,n,sum[4]={0},temp;


	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		if(temp<=18)
			sum[0]++;
		else if (temp<=35)
			sum[1]++;
		else if (temp<=60)
			sum[2]++;
		else  
			sum[3]++;
	}
	
	printf("1-18: %.2f%%\n",(float)(100*((float)sum[0]/(float)n)));
	printf("19-35: %.2f%%\n",(float)(100*((float)sum[1])/(float)n));
	printf("36-60: %.2f%%\n",(float)(100*((float)sum[2]/(float)n)));
	printf("60??: %.2f%%\n",(float)(100*((float)sum[3]/(float)n)));
}