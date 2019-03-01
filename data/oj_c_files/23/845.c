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
	int i=0,n;
	char *p[100];
	p[0]=(char *)malloc(100*sizeof(char));
	while(scanf("%s",p[i])!=EOF)
	{
		i++;
		p[i]=(char *)malloc(100*sizeof(char));
	}
	n=i;
	for(i=n-1;i>=0;i--)
	{
		if(i!=n-1)
			printf(" ");
		printf("%s",p[i]);
	}
}
