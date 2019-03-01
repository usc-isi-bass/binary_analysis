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
	int n,i,k;
	char w[10];
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%s", w);
		for (k=0;w[k]!='\0';k++)
		{
		}
		if (w[k-1]=='r'||w[k-1]=='y')
			w[k-2]='\0';
		else
			w[k-3]='\0';
		printf("%s\n", w);
	}
	return 0;
}

