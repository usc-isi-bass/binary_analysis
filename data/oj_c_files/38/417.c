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
	int n, i, j;
	double s, b, B[100];
	double sum=0;
	double A[100][100];
	int m;
	double a=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &m);
		for(j=0;j<m;j++)
		{
			scanf("%lf", &A[i][j]);
		}  
		b=0;
		sum=0;
		for(j=0;j<m;j++)
		{
         b+=A[i][j]; 
		}
		a=b/m;
		for(j=0;j<m;j++)
		{
        sum+=pow((A[i][j]-a),2);
        }
        B[i]=sqrt(sum/m);
	}
	for(i=0;i<n;i++)

	{
		s=B[i];
        printf("%.5lf\n", s);
	}
	return 0;
}