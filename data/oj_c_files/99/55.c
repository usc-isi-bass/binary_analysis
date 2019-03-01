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
	int i,n;
    int a[100],sum[4]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{   if(a[i]<=18)
			 sum[0]++;
		 else if(a[i]>=19&&a[i]<=35)
			 sum[1]++;
		 else if(a[i]>35&&a[i]<=60)
			 sum[2]++;
		 else if(a[i]>60)
			 sum[3]++;  
	}

	printf("1-18: %.2f%%\n",(float)100*sum[0]/n);
	printf("19-35: %.2f%%\n",(float)100*sum[1]/n);
	printf("36-60: %.2f%%\n",(float)100*sum[2]/n);
	printf("60??: %.2f%%\n",(float)100*sum[3]/n);
}