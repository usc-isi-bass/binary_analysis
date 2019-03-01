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
	double x[1000],a[100],h;
	double p[100]={0};
	int m[100];
	for(int i=0;i<n;i++)
	{
		
		scanf("%d",&m[i]);
		double h=0;
		for(int j=0;j<m[i];j++)
		{
			scanf("%lf",&x[j]);
			h += x[j];
		}
		a[i] = h/m[i];
		p[i]=0;
		for(int c=0;c<m[i];c++)
		{
		
			p[i] += (x[c]-a[i])*(x[c]-a[i]);
		}
	}
	double S[100];
	for(int v=0;v<n;v++)
	{
	S[v] = sqrt(p[v]/m[v]);
	printf("%.5f\n", S[v]);
	}
	return 0;
}