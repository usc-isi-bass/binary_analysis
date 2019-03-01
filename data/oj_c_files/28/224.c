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
	char *p;
	char str[2000];
	int num1[300]={0},i=0,num2=0;
	gets(str);
	p=str;
	do
	{
		if(*p==' ')
		{
			if(*(p-1)==' ')
			{
				p++;
			}
			else
			{
				p++;
				i++;
				num2++;
			}
		}
		else if(*p!=' ')
		{
			num1[i]++;
			p++;
		}
		if(*p=='\0')
		{
			if(*(p-1)==' ')
			break;
			else if(*(p-1)!=' ')
			{
				num2++;
			}
		}
	}while(*p!='\0');
	for(i=0;i<num2;i++)
	{
		printf("%d",num1[i]);
		if(i!=num2-1)
			printf(",");
	}
}