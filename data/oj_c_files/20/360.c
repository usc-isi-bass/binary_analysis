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
	int i,n;char str[11],substr[4];
	int max;
	while(scanf("%s %s",str,substr)!=EOF)
{
	n=strlen(str);
	char * p1;char * p2;char *p3;
	p1=str,p2=str,p3=str;max=str[0];
	for(i=0;i<n;i++)
	{
		if(*(p1+i)>max)
		{
			max=*(p1+i);p2=p1+i;
		}
	}
	for(p1=str;p1<(p2+1);p1++)
    	printf("%c",*p1);
	for(i=0;i<3;i++)
		printf("%c",substr[i]);
	for(p1=p2+1;p1<(p3+n);p1++)
        printf("%c",*p1);
	printf("\n");
}
}
