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
	int n,i,j;
	double l,max;
	max=0;

	struct {
		double a,b;
	} s[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%lf%lf",&s[i].a,&s[i].b);
		for (j=0;j<i;j++)
		{
			l=sqrt((s[i].a-s[j].a)*(s[i].a-s[j].a)+(s[i].b-s[j].b)*(s[i].b-s[j].b));
			if (l>max) max=l;
		}
	}
	printf("%.4lf",max);
	return 0;
}
	