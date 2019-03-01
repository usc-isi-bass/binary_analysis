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
	char c[30];
	int k,i;
	scanf("%s",c);
	k=strlen(c);
	printf("%d",k);
	for(i=0;i<k;i++)
		c[i]='\0';

	while(scanf("%s",c)!=EOF)
	{
		k=strlen(c);
		printf(",%d",k);
		for(i=0;i<k;i++)
		c[i]='\0';
	}
}
