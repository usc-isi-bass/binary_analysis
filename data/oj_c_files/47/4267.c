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
    int m,i;
	scanf("%d",&m);
	int A[100],B[100];
	for (i=0;i<m;i++)
		scanf("%d",&A[i]);
	for (i=0;i<m;i++)
		B[i]=A[m-i-1];
	
	for (i=0;i<m-1;i++)
		printf("%d ",B[i]);
	printf("%d",B[m-1]);
	return 0;
}