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
	int i,j,n;
	char *p;
	scanf("%d",&n);
	p=(char *)calloc(n,sizeof(char));
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(*(p+j)==*(p+i))
				*(p+j)=' ';
	printf("%d",*p);
	for(i=1;i<n;i++)
		if(*(p+i)!=' ')
			printf(",%d",*(p+i));
}