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
	char *a,*p,*max,*min;
	int i,j,k,m,n,t,ma=0,mi=10000;
	a=(char *)malloc(1000*sizeof(char));
	p=(char *)malloc(1000*sizeof(char));
	max=(char *)malloc(1000*sizeof(char));
	min=(char *)malloc(1000*sizeof(char));
	gets(a);
	n=strlen(a);
	p=a;
	for(;;a++)
	{
		if(*a==' '||*a=='\0')
		{
			
			m=a-p;
			if(m>ma)
			{
				ma=m;
				max=p;
			}
			if(m<mi)
			{
				mi=m;
				min=p;
			}
			if(*a=='\0')break;
			p=a+1;
		}
	}
	for(i=0;*(max+i)!=' '&&*(max+i);i++)
		printf("%c",*(max+i));
	printf("\n");
	for(i=0;*(min+i)!=' '&&*(min+i);i++)
		printf("%c",*(min+i));
	printf("\n");



	
}