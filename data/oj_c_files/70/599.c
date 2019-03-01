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
	int n,i,p;
	scanf("%d",&n);
	double max,x[100],y[100];
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(p=i+1;p<n;p++)
		{   
			if(i==0&&p==1)
				max=sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2));
			else if(sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2))>max)
				max=sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2));
		}
	}
	printf("%.4lf",max);
	return 0;
}

