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
	int n,i,a[100],sum1=0,sum2=0,sum3=0,sum4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
			if(a[i]<=18)
			sum1+=1;
		else if(a[i]<=35)
		sum2+=1;
		else if(a[i]<=60)
			sum3+=1;
		else
			sum4+=1;
	}
	printf("1-18: %.2f%%\n",(float)sum1/n*100);
	printf("19-35: %.2f%%\n",(float)sum2/n*100);
	printf("36-60: %.2f%%\n",(float)sum3/n*100);
	printf("60??: %.2f%%\n",(float)sum4/n*100);
	return 0;
}
