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
	int n,i,sum=0,j;
	scanf("%d\n",&n);
	int string[100000];
	int *p=string;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	int k;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(string[i]!=k)
		{
			printf("%d",*(p+i));
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(string[j]!=k)
			printf(" %d",*(p+j));
	}
}

