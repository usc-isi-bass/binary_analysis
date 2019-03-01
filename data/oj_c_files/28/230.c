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
	char str[1000],*p;
	int a[300]={0},k=0,i,space=0,word=0;
	gets(str);
	p=str;
	while(*p==' ')
		p++;
	while(*p!='\0')
	{
		if(*p==' ')
		{
			space++;
			word=0;
		}
		if(space==1)
		{
			k++;
			space++;
		}
		if(*p!=' ')
		{

			a[k]++;
			space=0;
			
		}
		p++;
	}
	for(i=0;i<k;i++)
		printf("%d,",a[i]);
	printf("%d\n",a[k]);
}
