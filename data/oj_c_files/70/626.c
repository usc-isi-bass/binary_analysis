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
	int n,i,j;
	double A[100][2],s,max=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%lf",&A[i][j]);
		}
	}
    for (i=0;i<n-1;i++)
	
		for (j=i+1;j<n;j++)
		{
			s=sqrt(pow(A[i][0]-A[j][0],2)+pow(A[i][1]-A[j][1],2));
			if (s>max)
				max=s;
		}
	
    printf("%.4lf",max);
	return 0;
}