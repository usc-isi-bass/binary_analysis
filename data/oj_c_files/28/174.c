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
	char a[4000]={'\0'},b[800];
	int k=0,i,space=0;
	gets(a);
	for(i=0;i<800;i++)
		b[i]=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[k]++;space=0;
		}
		else
		{
			space++;
			if(space==1)
				k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		printf("%d",b[i]);
		if(i<k)
			printf(",");
	}
}

