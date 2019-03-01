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
	char b[205][100];
	int i,n,j=0,k=0,s=0,t=0,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",*(b+i));
	}
	max=strlen(*b);
	min=strlen(*b);
	for (i=1;i<n;i++)
	{
		if (strlen(*(b+i))>max)
		{
			max=strlen(*(b+i));
			s=i;
		}
		if (strlen(*(b+i))<min)
		{
			min=strlen(*(b+i));
			t=i;
		}
	}
	printf("%s\n%s\n",*(b+s),*(b+t));
	return 0;
}
