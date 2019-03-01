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
	char s[50],w[50];
	int m,n,i,j,k;
	scanf("%s%s",s,w);
	m=strlen(w);
	n=strlen(s);
	for (i=0;i<m;i++)
	{
		k=i;
		for (j=0;j<n;j++,i++)
		{
			if (s[j]!=w[i])
				break;
		}
		i=k;
		if (j==n)
			break;
	}
	printf("%d\n",i);
}