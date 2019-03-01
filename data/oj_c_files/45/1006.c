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
	int i,j;
	char a[60],b[60];
	scanf("%s %s",a,b);
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		for (j=i;j<i+strlen(a);j++)
		{
			if (a[j-i]!=b[j])
				break;
		}
		if (j==i+strlen(a))
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i==strlen(b)-strlen(a)+1)
		printf("no\n");
	
	return 0;
}

