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
	char A[250][250];
	int n,i,a,s,b;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s",A[i]);
	for (i=0;i<n;i++)
	{
		a=strlen(A[i]);
		s=a+s;
		if (s==80)
		{
			printf("%s\n",A[i]);
			s=0;
		}
		else if (s>80)
		{
			if (i!=n-1)
			printf("\n%s ",A[i]);
			else 
				printf("\n%s\n",A[i]);
			s=a+1;
		}
		else 
		{
			b=strlen(A[i+1]);
			if (i!=n-1)
			{
				if (s+b+1>80)
			printf("%s",A[i]);
				else printf("%s ",A[i]);
			}
			else 
				printf("%s\n",A[i]);
			s=s+1;
		}
	}
	return 0;
}


