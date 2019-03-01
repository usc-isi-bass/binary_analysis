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
	char *p[200],*p1,*p2;
	int i=0,n,j;
	for(i=0;i<200;i++)
		p[i]=(char *)malloc(100*sizeof(char));
	i=0;
	for(j=0;(*(p[i]+j)=getchar())!='\n';j++)
	{
		if(*(p[i]+j)==' ')
		{
			*(p[i]+j)='\0';
			i++;
			j=-1;
		}
	}
	*(p[i]+j)='\0';
	n=i;
	p1=(char *)malloc(100*sizeof(char));
	p2=(char *)malloc(100*sizeof(char));
	scanf("%s\n%s",p1,p2);
	for(i=0;i<=n;i++)
	{
		if(strcmp(p[i],p1)==0)
		{
		strcpy(p[i],p2);
		}
	}
	printf("%s",p[0]);
	for(i=1;i<=n;i++)
	{
		printf(" %s",p[i]);
	}
	return 0;
}