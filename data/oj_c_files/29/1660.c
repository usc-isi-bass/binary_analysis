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
	int m,i,S[100];
		float A[100];
		int j;
		float B[100];
		A[0]=1;A[1]=2;
		B[0]=2/1;
		for(j=2;j<100;j++)
		{
			A[j]=A[j-1]+A[j-2];
			B[j-1]=A[j]/A[j-1]+B[j-2];
		}
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&S[i]);
	for(i=0;i<m;i++)
		printf("%.3f\n",B[S[i]-1]);

	return 0;
}

