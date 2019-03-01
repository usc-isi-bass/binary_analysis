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

void main()
{
	int num[300]={0},n,i,a[300]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("%d",num[0]);
	a[num[0]]=1;
	for (i=1;i<n;i++)
		if (a[num[i]]==0)
		{
			printf(",%d",num[i]);
			a[num[i]]=1;
		}
	printf("\n");
}