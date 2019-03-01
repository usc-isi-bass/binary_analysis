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
	char a[30000];
	gets(a);
	int len[30000]={0};
	int i=0;
	int k=0;
	char *p;
	int *p1;
	p1=len;
	for(p=a;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			(*(p1+i))++;k=0;
		}
		if(*p==' ')
		{
			if(k==0) {i++;k=1;}
			else continue;
		}
	}
	for(p1=len;(*(p1+1))!=0;p1++)
		printf("%d,",*p1);
	printf("%d\n",*p1);
}
