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
	int n,i,j,elem[200],s=0;
	int *p=elem;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0,s=0;j<i;j++)
		{
			if(*(p+i)==*(p+j)) s++;
		}
		if(s==0)
		{
			printf(",%d",*(p+i));
		}
	}
}