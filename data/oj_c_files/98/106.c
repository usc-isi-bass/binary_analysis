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
	int n;
	char a[1000][41];
	int b[1000];
	int i,s=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}

	for(i=0;i<n;i++)
	{
//		int u=0;
		if(s==0)
		{
			printf("%s",a[i]);
//			u=0;
			s=b[i];
			i++;
		}
		s=s+b[i]+1;
		if(s>80)
		{
			printf("\n");
			s=0;
			i--;
//			u=1;
			continue;
		}
		else
		{
			printf(" %s",a[i]);
		}
	}
}