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
	char str1[50],str2[50],*p,*q,*t;
	int m;
	scanf("%s %s",str1,str2);
	p=str1;
	q=str2;
	while(*q!='\0')
	{
		if(*q==*p)
		{	t=q;
			m=1;
			for(;*p!='\0';p++,q++)
				if(*p!=*q)
				{
					m=0;
					break;
				}
			if(m)
			{
				printf("%d\n",t-str2);
				break;
			}
			else
			{
				q++;
				p=str1;
			}
		}
		else
			q++;
	}
}


