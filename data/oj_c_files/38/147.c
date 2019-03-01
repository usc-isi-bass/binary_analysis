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
	double a[100][100],b,s;
	int n,m,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=0;
		s=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",*(a+i)+j);
		}
		for(j=0;j<m;j++)
		{
			b=b+a[i][j];
		}
		b=b/m;
		for(j=0;j<m;j++)
		{
			s=s+pow((a[i][j]-b),2);
		}
		s=s/m;
		s=pow(s,0.5);
		printf("%.5f\n",s);
	}
	return 0;
}
