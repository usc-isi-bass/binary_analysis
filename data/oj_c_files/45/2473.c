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
	char s[100],w[100];
	int i,j,l1,l2,k;
	scanf("%s%s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	i=0;
	for (j=0;j<l2;j++)
	{
		if (w[j]==s[i]) 
		{
			if (i==0) k=j;
			i++;
		}
		if (i==l1) break;
	}
	printf("%d",k);

	return 0;
}

