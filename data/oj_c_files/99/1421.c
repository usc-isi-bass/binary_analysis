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

int main(int argc, char* argv[])
{
	int n,i,a;
	double xiaob,qingb,zhongb,laob;
	int xiao=0,qing=0,zhong=0,lao=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(a>=1&&a<=18)
			xiao++;
		else if(a>=19&&a<=35)
			qing++;
		else if(a>=36&&a<=60)
			zhong++;
		else if(a>=61)
			lao++;
	}
	xiaob=(double)xiao/n*100;
	qingb=(double)qing/n*100;
	zhongb=(double)zhong/n*100;
	laob=(double)lao/n*100;
	printf("1-18: %.2lf%%\n",xiaob);
	printf("19-35: %.2lf%%\n",qingb);
         printf("36-60: %.2lf%%\n",zhongb);
	printf("60??: %.2lf%%\n",laob);
	return 0;
}

