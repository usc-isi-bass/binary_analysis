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
	int n;
	int s[300];
	int i;
	int j,k;
	scanf("%d", &n);
	for (i=0,j=0;i<n;i++)
	{
		scanf("%d",&s[j]);
		for (k=0;k<j;k++)
		{
			if (s[k]==s[j]) j--;
		}
		j++;
	}
	for (i=0;i<j;i++)
	{
		printf("%d",s[i]);
		if (i!=j-1) printf(",");
	}
	return 0;
}