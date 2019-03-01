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
	int n;
	scanf("%d",&n);
	int x=0;
	double sum=0,s=0;
	double z[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(int j=0;j<x;j++)
		{
			scanf("%lf",&(z[j]));
			sum=sum+z[j];
		}
		for(int f=0;f<x;f++)
		{
			s=s+(z[f]-sum/x)*(z[f]-sum/x);
		}
		s=s/x;
		s=pow(s,0.5);
		printf("%0.5lf\n",s);
		sum=0;
		s=0;
	}
	return 0;
}
