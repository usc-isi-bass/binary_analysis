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
	char str1[101],str2[101],*p1,*p2,*temp;
	
	gets(str1);
	p1=str1;
	p2=str2;
	while (*(p1+1)!='\0')
	{ 
		temp=p1+1;
		*p2=*p1+*temp;
		p1=p1+1;
		p2=p2+1;
	}
	temp=str1;
	*p2=*p1+*temp;
	temp=str2;
	while (temp<=p2)
	{
		printf("%c",*temp);
		temp=temp+1;
	}
	printf("\n");
}
