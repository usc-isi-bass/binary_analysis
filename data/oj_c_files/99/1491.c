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
	int n,age[100],i,a=0,b=0,c=0,d=0;
	double agea,ageb,agec,aged;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
		if (age[i]<=18)
		{
			a++;
		}
		if (age[i]>=19&&age[i]<=35)
		{
			b++;
		}
		if (age[i]>=36&&age[i]<=60)
		{
			c++;
		}
		if (age[i]>60)
		{
			d++;
		}
	}
	agea=(double)a/n*100;
	ageb=(double)b/n*100;
	agec=(double)c/n*100;
	aged=(double)d/n*100;
	printf("1-18: %.2lf",agea);
	printf("%%\n");
	printf("19-35: %.2lf",ageb);
	printf("%%\n");
	printf("36-60: %.2lf",agec);
	printf("%%\n");
	printf("60??: %.2lf",aged);
	printf("%%\n");
	return 0;
}
	