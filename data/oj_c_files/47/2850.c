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
	int x[100];
	int n,i;
	int *p=NULL;
	scanf("%d",&n);
	p=&x[0];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d",*(p+n-i-1));
	}
	printf("\n");
	return 0;
}