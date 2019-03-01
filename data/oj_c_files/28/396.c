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
	char str[2048],*p;
	int i=0,k=0;
	gets(str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)==' ') k++;
	}
	if(k==0)
	{
		for(i=0;*(p+i)!='\0';i++) k++;
		printf("%d",k);
	}
	else
	{
	    k=0;
		for(i=0;*(p+i)!='\0';i++)
		{
		if(*(p+i)==' ') 
		{
			if(k!=0) 
			{
				printf("%d,",k);
				k=0;
			}
		}
		else 
			k++;
		
		}
	for(i=strlen(str)-1;;i--)
		if(*(p+i)==' ') 
		{
			printf("%d",strlen(str)-i-1);
			break;
		}
	}

	
}