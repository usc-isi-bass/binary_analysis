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
	char str[100],string[100][100];
	char *p,(*q)[100];
	int i,j,k;
	p=str;
	gets(str);
	q=string;
	j=0;k=0;
	for(i=0;*(p+i)!='\0';i++)
		if(*(p+i)==' ')
		{
			*(*(q+j)+k)='\0';
			j++;k=0;
		}
		else
		{
			*(*(q+j)+k)=*(p+i);
			k++;
		}
	*(*(q+j)+k)='\0';
	for(i=j;i>0;i--)
		printf("%s ",q+i);
	printf("%s\n",q);
}
