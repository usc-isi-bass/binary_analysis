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
	char a[50],b[50];
	int i,j;
	scanf("%s%s",a,b);
	i=0;j=0;
	while (a[i]!=0&&b[i]!=0)
		if (b[j]==a[i])
		{
			j++;
			i++;
		}
		else 
		{
			j++;
			i=0;
		}
	if (a[i]==0)
		printf("%d\n",j-i);
	else printf("no\n");
}


