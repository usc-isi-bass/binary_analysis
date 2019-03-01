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
	int n,i;
	scanf("%d",&n);
	int *A,*B;
	A=(int *)malloc(sizeof(int)*n);
	B=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		B[n-1-i]=A[i];
	}
	for(i=0;i<n;i++)
	{
		if(i<(n-1))
		printf("%d ",B[i]);
		else
			printf("%d",B[i]);

	}

	return 0;
}

