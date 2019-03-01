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
	char str[260],sbstr[260],rplyc[260],*p1,*p2,*p3;
	int i,j,a,b,m;
	gets(str);
	gets(sbstr);
	gets(rplyc);
	a=strlen(str);
	b=strlen(sbstr);
	
	for(i=0;i<a-b+1;i++)
	{
		m=0;
		p1=str+i;
		p2=sbstr;
		for(j=0;j<b;j++)
		{
			if(*(p1+j)==*(p2+j))
				m++;
		}
	
		if(m==b)
		{
            p1=str+i;
	    	p3=rplyc;
	    	for(j=0;j<b;j++)
				*(p1+j)=*(p3+j);
			break;
		}
	}
	puts(str);
}

	
