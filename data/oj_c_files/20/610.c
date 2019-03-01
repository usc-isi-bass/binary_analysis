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
	char a[100],b[100];
	int n,i,j;
	char *p1;
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		p1=&a[0];
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>*p1)
			{p1=&a[i];}
		}
		for(i=0;a[i]!='\0';i++)
		{
			if(&a[i]!=p1)
				printf("%c",a[i]);
			if(&a[i]==p1)
				printf("%c%c%c%c",*p1,b[0],b[1],b[2]);
		}
		printf("\n");
	}
	
}