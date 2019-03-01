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
	int i,A[N],B[N],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%d",&A[i]);
	}
	printf("%d",A[n-1]);
	for(i=1;i<n;i++)
	{
		B[i]=A[n-1-i];
	
	printf(" %d",B[i]);
	}
	return 0;
}

